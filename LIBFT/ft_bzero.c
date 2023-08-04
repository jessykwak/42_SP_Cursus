/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:45:51 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/03 23:57:43 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = 0;
		index++;
	}
}

/* int main(void)
{
	char str[] = "WOT THE ACTUAL FORK";

	printf("%s\n", str);
	ft_bzero(str, 3);
	printf("%s\n", str);

	return (0);
} */