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
#include <stdlib.h>
#include <string.h>

void ft_putchar(char c)
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
	return (index + 1);
}

int main(int argc, char **argv)
{
    int 	param = 1;
    int 	sorted = 0;
	char	*aux;
	int		size;

    if (argc <= 1)
        return 1;

    while (sorted == 0)
    {
        sorted = 1;
        param = 1;
        while (param + 1 < argc)
        {
			size = ft_strlen(argv[param]);
			aux = (char *)malloc(size);
            if (ft_strcmp(argv[param], argv[param + 1]) > 0)
            {
                aux = argv[param];
                argv[param] = argv[param + 1];
                argv[param + 1] = aux;
                sorted = 0;
            }
            param++;
        }
    }
	free(aux);
    param = 1;
    while (param < argc)
    {
        int len = strlen(argv[param]);
        int i = 0;
        while (i < len)
        {
            ft_putchar(argv[param][i]);
            i++;
        }
        ft_putchar('\n');
        param++;
    }
    return (0);
}
