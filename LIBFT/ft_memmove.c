/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:48:12 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:58:08 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*dest_a;
	const unsigned char	*src_a;

	dest_a = dest;
	src_a = src;
	count = 0;
	while (count < n)
	{
		*dest_a = *src_a;
		dest_a++;
		src_a++;
		count++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char source[] = "Hello, World!";
	char destination[] = "Hello, Universe!";

	ft_memmove(destination+16, source+6, 7);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
} */