/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:17:02 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:57:47 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(-3));
	printf("%d\n", ft_isalnum('4'));
	return (0);
} */