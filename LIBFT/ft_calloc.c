/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:02:46 by jessk             #+#    #+#             */
/*   Updated: 2023/09/11 19:48:40 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocate memory for an array of 'nmemb' elements of 'size' bytes.
//Returns a pointer to the allocated memory.

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*array;
	unsigned char	*ptr;
	size_t			total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (total > __INT_MAX__ || total / nmemb != size)
		return (NULL);
	array = malloc(total);
	ptr = array;
	if (array == NULL)
		return (NULL);
	else
	{
		while (total)
		{
			*ptr++ = 0;
			total--;
		}
	}
	return (array);
}

/* #include <stdio.h>

int	main(void)
{
	int num_elements = 0;
	int *array = (int *)ft_calloc(num_elements, sizeof(int));
	int index;

	if (array != NULL)
	{
		while (index < num_elements)
		{
			printf("array[%d] = %d\n", index, array[index]);
			index++;
		}
		free(array);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}

	return (0);
} */