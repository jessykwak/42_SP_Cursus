/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:52:13 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/21 22:26:24 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*aux;

	aux = *str1;
	*str1 = *str2;
	*str2 = aux;
}

int	main(int argc, char **argv)
{
	int	param;
	int	sorted;

	param = 1;
	while (param < argc)
	{
		sorted = 1;
		while (sorted < argc)
		{
			if (ft_strcmp(argv[param], argv[sorted]) < 0)
				ft_swap(&argv[param], &argv[sorted]);
			sorted++;
		}
		param++;
	}
	param = 1;
	while ((param) < argc)
	{
		ft_putstr(argv[param]);
		ft_putchar('\n');
		param++;
	}
	return (0);
}
