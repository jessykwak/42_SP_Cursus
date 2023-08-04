/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:07:49 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:59:06 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('a'));
	printf("%d\n", ft_tolower(3));
	return (0);
} */