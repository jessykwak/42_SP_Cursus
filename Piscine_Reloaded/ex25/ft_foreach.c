/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:51:17 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/21 21:38:48 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}

/* #include <stdio.h>

void	ft_putnbr(int num)
{
	printf("%d ", num);
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int	length;

	length = sizeof(tab) / sizeof(tab[0]);
	ft_foreach(tab, length, &ft_putnbr);

	return (0);
}
 */