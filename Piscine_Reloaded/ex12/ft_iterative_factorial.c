/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:39:25 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 18:54:14 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
} */
