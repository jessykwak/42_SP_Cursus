/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:48:12 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/17 01:35:40 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*src_a;
	char		*dst_a;
	size_t		index;

	src_a = (const char *)src;
	dst_a = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (src_a < dst_a)
	{
		index = n;
		while (index--)
			dst_a[index] = src_a[index];
	}
	else
	{
		index = 0;
		while (index < n)
		{
			dst_a[index] = src_a[index];
			index++;
		}
	}
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char	source[] = "Hello, World!";
	char	destination[] = "Hello, Universe!";

	ft_memmove(destination + 16, source + 6, 7);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
} */
