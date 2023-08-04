/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:54:08 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:58:27 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	index;
	size_t	count;

	index = 0;
	while (dst[index] != '\0')
		index++;
	lendest = index;
	if (size <= lendest)
	{
		count = 0;
		while (src[count] != '\0')
			count++;
		return (size + count);
	}
	index = 0;
	while (((lendest + index) < (size - 1)) && src[index] != '\0')
	{
		dst[lendest + index] = src[index];
		index++;
	}
	dst[lendest + index] = '\0';
	return (lendest + index);
}

/* #include <stdio.h>

int	main(void)
{
	char dest[16] = "to com fome";
	char src[13] = " quero leite";

	printf("%u", strlcat(dest, src, 10));
	printf("\n%s", dest);
	printf("%zu", ft_strlcat(dest, src, 10));
	printf("\n%s", dest);
	return (0);
} */
