/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:18:22 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 17:04:12 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/* #include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	printf("a = %d, b = %d \n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);214214214
	return (0);
} */
