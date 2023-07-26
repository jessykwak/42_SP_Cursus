/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:49:16 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/24 21:09:36 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t index;

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

/* {
	size_t	count;
	size_t	index;

	count = 0;
	while (src[count] != '\0')
		count++;
	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dst[index] = src[index];
			index++;
		}
	}
	dst[index] = '\0';
	return (count);
} */

int main(void)
{
	const char *source = "Hello, world!";
	char destination[10];

	printf("%zd", strlcpy(destination, source, sizeof(destination)));
	printf("%zd", ft_strlcpy(destination, source, sizeof(destination)));
}