/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:26:35 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/12 14:39:21 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 5;
	b = 0;
	c = 11;
	d = 11;
	ft_div_mod(a, b, &c, &d);
	printf("%d/%d = %d e resto %d", a, b, c, d);
	return (0);
} */
