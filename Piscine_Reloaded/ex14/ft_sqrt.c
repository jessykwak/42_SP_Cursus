/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:27:47 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 18:53:46 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;
	int	guess;

	num = nb;
	guess = (num + 1) / 2;
	if (num == 0 || num == 1)
		return (nb);
	while (guess < num)
	{
		num = guess;
		guess = (num + nb / num) / 2;
	}
	if (num * num != nb || nb < 0)
		return (0);
	return (num);
}

/* #include <stdio.h>

int	main(void)
{
	int nb;

	nb = 49;
	printf("%d\n", ft_sqrt(nb));
	return (0);
} */