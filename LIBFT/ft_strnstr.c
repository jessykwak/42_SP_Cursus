/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:49 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 19:47:12 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	index;
	size_t	lil_len;

	count = 0;
	lil_len = 0;
	while (little[lil_len] != '\0')
		lil_len++;
	if (lil_len == 0)
		return ((char *)big);
	while (big[count] != '\0' && count < len)
	{
		index = 0;
		while (big[count + index] == little[index] && (count + index) < len)
		{
			if (index == lil_len - 1)
				index++;
		}
		count++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello!";

	if (ft_strnstr(str1, str2, 15)!= NULL)
	{
		printf("'%s' is at position: %ld\n", str2, ((ft_strnstr(str1, str2, 15))
				- str1));
	}
	else
	{
		printf("'%s' not found.\n", str2);
	}

	return (0);
} */