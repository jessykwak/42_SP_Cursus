/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:39:45 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:58:10 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	index;

	index = 0;
	while (index < num)
	{
		((unsigned char *)ptr)[index] = ((unsigned char)value);
		index++;
	}
	return (ptr);
}

/* #include <stdio.h>

int	main(void)
{
	char buffer[10] = "arroz";

	printf("Buffer after memset: \"%p\"\n", memset(buffer, 0, sizeof(buffer)));
	printf("Buffer after memset: \"%p\"\n", ft_memset(buffer, 0,
			sizeof(buffer)));

	return (0);
} */