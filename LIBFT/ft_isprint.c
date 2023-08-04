/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:13:52 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:57:54 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint(5));
	printf("%d\n", ft_isprint('c'));
	printf("%d\n", ft_isprint('\n'));
	return (0);
} */
