/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 01:45:54 by jessk             #+#    #+#             */
/*   Updated: 2023/08/15 01:18:12 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

/* void	testing_func(unsigned int index, char *c)
{
	if (c[index] >= 'a' && c[index] <= 'z')
		c[index] -= 32;
}

int	main(void)
{
	char	str[] = "Hello Wordl";

	printf("original: %s\n", str);
	ft_striteri(str, testing_func);
	printf("modified: %s\n", str);
	return (0);
} */