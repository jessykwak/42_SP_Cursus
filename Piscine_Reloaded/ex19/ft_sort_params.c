/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:52:13 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 17:38:22 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		index++;
		str++;
	}
	return (index);
}

int	main(int argc, char **argv)
{
	int index;
	int param;

	index = 0;
	param = 1;
	if (argc <= 1)
		return (1);
	while (param + 1 <= argc)
	{
		if (ft_strcmp(*argv[param] - *argv[param + 1]) < 0)
		{
            
		}
	}
	return (0);
}
