/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 01:28:51 by jessk             #+#    #+#             */
/*   Updated: 2023/08/15 01:34:08 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	index;

	index = 0;
	if (s != NULL)
	{
		while (s[index] != '\0')
		{
			write(fd, &s[index], 1);
			index ++;
		}
	}
}

/* int	main(void)
{
	char	*str;

	str = "Hello world";
	ft_putstr_fd(str, 1);
	return (0);
} */