/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:01:05 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 22:04:31 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		if (count < (n - 1))
			count++;
		else
			return (0);
	}
	return ((unsigned char)(s1[count]) - (unsigned char)(s2[count]));
}

/* #include <stdio.h>

int main (void)
{
	char *s1;
	char *s2;

	s1 = "Sleeping bag";
	s2 = "Sleeping hag";

	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
} */