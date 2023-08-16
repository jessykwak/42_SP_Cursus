/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 01:25:48 by jessk             #+#    #+#             */
/*   Updated: 2023/08/16 01:48:06 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putchar_fd(char c, int fd); */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = ((unsigned int)(n)) * (-1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr_fd((nbr / 10), fd);
	ft_putchar_fd((char)(nbr % 10 + '0'), fd);
}

/* int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
} */