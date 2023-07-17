/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:08:52 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 18:56:19 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index + 1);
}

char	*ft_strdup(char *src)
{
	char	*aux;
	int		index;
	int		size;

	size = ft_strlen(src);
	aux = (char *)malloc(size);
	index = 0;
	while (src[index] != '\0')
	{
		aux[index] = src[index];
		index++;
	}
	aux[index] = '\0';
	return (aux);
}

/* int	main(void)
{
	char *src = "Hello, World2!";
	char *dst = ft_strdup(src);
	char *dst2 = strdup(src);

	printf("Original string: %s\n", src);
	printf("Duplicated string: %s\n", dst);
	printf("Duplicated string: %s\n", dst2);
	free(dst);
	free(dst2);

	return (0);
}
 */