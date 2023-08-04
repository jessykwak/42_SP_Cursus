/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:14:33 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 22:58:47 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha(3));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha(-3));
	return (0);
} */
