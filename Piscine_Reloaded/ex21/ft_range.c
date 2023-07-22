/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:32:30 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/21 21:38:56 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*list;
	int	index;

	index = 0;
	size = max - min;
	list = (int *)malloc(sizeof(int) * (size));
	if (min < max)
	{
		while (min < max)
		{
			list[index] = min;
			index++;
			min++;
		}
	}
	else
		return (NULL);
	return (list);
}

/* int	main(void)
{
	int	*list;
	int	index;
	int	min;
	int	max;

	min = 5;
	max = 20;
	list = ft_range(min, max);
	index = 0;
	if (list != NULL)
	{
		while ((index < (max - min)))
		{
			printf("%i ", list[index]);
			index++;
		}
	}
	free(list);
	return (0);
} */