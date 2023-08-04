/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:01:31 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 00:01:32 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			count;

	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	count = 0;
	while ((*str1 - *str2 == 0) && count < n)
	{
		count++;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

/* #include <stdio.h>

int main (void)
{
	const char *s1;
	const char *s2;

	s1 = "Sleeping bag";
	s2 = "Sleeping hag";

	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));
} */