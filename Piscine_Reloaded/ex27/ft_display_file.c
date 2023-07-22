/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:38:03 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/21 22:49:36 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	read_file(char *filename)
{
	int		path_name;
	int		read_size;
	char	buffer[4096];

	path_name = open(filename, O_RDONLY);
	if (path_name == -1)
	{
		ft_putstr("Error: Failed to open file\n");
		return ;
	}
	read_size = read(path_name, buffer, 4096);
	if (read_size > 0)
	{
		buffer[read_size] = '\0';
		ft_putstr(buffer);
	}
	else
	{
		ft_putstr("Error reading file.\n");
	}
	close(path_name);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc == 2)
	{
		read_file(argv[1]);
	}
	else
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
