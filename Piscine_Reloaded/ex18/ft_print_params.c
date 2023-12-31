/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:44:46 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/17 18:57:01 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	index;
	int	param;

	index = 0;
	param = 1;
	if (argc <= 1)
		return (1);
	while (param != argc)
	{
		while (argv[param][index] != '\0')
		{
			ft_putchar(argv[param][index]);
			index++;
		}
		ft_putchar('\n');
		index = 0;
		param++;
	}
	return (0);
}
