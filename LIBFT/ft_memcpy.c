/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:47:01 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:58:05 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*dest_a;
	const unsigned char	*src_a;

	dest_a = dest;
	src_a = src;
	count = 0;
	while (count < n)
	{
		dest_a[count] = src_a[count];
		count++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char source[] = "Bye, Universe!";
	char destination[29] = "     Hello, Universe!";

	memcpy(destination, source, 5);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	ft_memcpy(destination, source, 5);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
} */