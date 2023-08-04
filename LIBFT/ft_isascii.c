/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:25 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:57:49 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('2'));
	printf("%d\n", ft_isascii(150));
	printf("%d\n", ft_isascii(-5));
	return (0);
} */
