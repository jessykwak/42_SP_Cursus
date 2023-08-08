/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:48:12 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/07 21:55:50 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_a;
	const char	*src_a;

	dst_a = dst;
	src_a = src;
	if (dst_a > src_a && dst_a < src_a + n)
	{
		dst_a += n;
		src_a += n;
		while (n > 0)
		{
			*(--dst_a) = *(--src_a);
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*dst_a++ = *src_a++;
			n--;
		}
	}
	return (dst);
}

/* #include <stdio.h>

int	main(void)
{
	char	source[];
	char	destination[];

	source[] = "Hello, World!";
	destination[] = "Hello, Universe!";
	ft_memmove(destination + 16, source + 6, 7);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}
 */