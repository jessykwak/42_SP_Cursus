/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:08:19 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 18:54:22 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		ans = nb * ft_recursive_factorial(nb - 1);
	return (ans);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(13));
	return (0);
}
 */