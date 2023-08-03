/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:03:49 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/24 22:07:34 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('a'));
	printf("%d\n", ft_toupper(3));
	return (0);
}
 */