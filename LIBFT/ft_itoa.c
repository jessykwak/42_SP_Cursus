/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 01:32:53 by jessk             #+#    #+#             */
/*   Updated: 2023/08/17 02:21:59 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdlib.h>
#include <stdio.h> */

size_t	num_length(int n)
{
	size_t	decimal;

	if (n > 0)
		decimal = 0;
	else
		decimal = 1;
	while (n)
	{
		n /= 10;
		decimal++;
	}
	return (decimal);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = num_length(nbr);
	if (nbr < 0)
		nbr = nbr * (-1);
	str = (char *)malloc(size + 1);
	if (!(str))
		return (NULL);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

/* int	main(void)
{
	char	*str;

	str = ft_itoa(-55);
	printf("%s\n", str);

	free(str);
	return (0);
}
 */