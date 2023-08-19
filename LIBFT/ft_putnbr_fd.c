/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 01:25:48 by jessk             #+#    #+#             */
/*   Updated: 2023/08/19 19:51:49 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//When a function is called it gets placed on a execution stack.
//the same workds for recursive function.
//A stack is a data structure that operates on a "Last In, Firs Out" basis.
//It is a methor of ordering operations for execution.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = ((long)(n)) * (-1);
	}
	else
		nbr = (long)n;
	if (nbr >= 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd((char)(nbr % 10 + '0'), fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }