/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:01:44 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 19:46:04 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	num;

	sign = 1;
	index = 0;
	num = 0;
	if (nptr[0] == '\0')
		return (0);
	while (nptr[index] == ' ' || nptr[index] == '\n' || nptr[index] == '\t'
		|| nptr[index] == '\v' || nptr[index] == '\f' || nptr[index] == '\r')
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = sign * (-1);
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		num = (num * 10) + (nptr[index] - '0');
		index++;
	}
	return (num * sign);
}

/* int main(void)
{
	const char *str = "21474";
	int num;

	num = ft_atoi(str);
	printf("Converted integer: %d\n", num);

	return (0);
} */