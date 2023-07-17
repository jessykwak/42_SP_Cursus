/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:28:20 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 18:33:24 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;

	str = "Hello, world!";
	printf("Length of the string: %ld\n", strlen(str));
	printf("Length of the string: %d\n", ft_strlen(str));
	return (0);
} */