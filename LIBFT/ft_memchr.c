/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:01:35 by jessk             #+#    #+#             */
/*   Updated: 2023/08/07 22:42:37 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			count;

	str = ((unsigned char *)s);
	search = ((unsigned char)c);
	count = 0;
	while (count < n)
	{
		if (str[count] == search)
			return (&str[count]);
		count++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main (void)
{
	const char  *str;

	str = "Monkey's banana!";
	printf("%p\n", ft_memchr(str, 'H', 16));
	printf("%p\n", memchr(str, 'H', 16));
} */