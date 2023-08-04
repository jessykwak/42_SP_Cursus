/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:49:16 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:58:32 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	while (src[len] != '\0')
		len++;
	while (index < (size - 1) && size > 0 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len);
}

/* #include <stdio.h>

int	main(void)
{
	const char *source = "Hello, world!";
	char destination[10];

	printf("%zd", strlcpy(destination, source, sizeof(destination)));
	printf("%zd", ft_strlcpy(destination, source, sizeof(destination)));
} */