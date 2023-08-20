/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:49 by jessk             #+#    #+#             */
/*   Updated: 2023/08/19 23:01:17 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first ocurrence of substring 'little' in the string 'big', 
//searching thru 'len' size of the string 'big'

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
	while (big[count] != '\0' && count + lil_len <= len)
	{
		index = 0;
		while (big[count + index] == little[index])
		{
			if (index == lil_len - 1)
				return ((char *)(big + count));
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