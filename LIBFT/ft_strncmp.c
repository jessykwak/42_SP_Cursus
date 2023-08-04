/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:01:05 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 00:01:06 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while ((*s1 - *s2 == 0) && count < n)
	{
		count++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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