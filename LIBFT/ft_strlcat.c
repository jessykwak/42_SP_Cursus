/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:54:08 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/24 22:23:43 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	index;

	lendest = ft_strlen(dst);
	index = 0;
	if (size <= lendest)
		return (size + ft_strlen(src));
	while (src[index] && ((lendest + index) < (size - 1)))
	{
		dst[lendest + index] = src[index];
		index++;
	}
	dst[lendest + index] = '\0';
	return (ft_strlen(dst));
}

#include <stdio.h>

int	main(void)
{
	char dest[16] = "to com fome";
	char src[13] = " quero leite";

	printf("%zu", ft_strlcat(dest, src, 10));
	printf("\n%s", dest);
	return (0);
}
