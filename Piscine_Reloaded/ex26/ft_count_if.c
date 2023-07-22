/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:59:27 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/21 21:38:50 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;

	count = 0;
	while (*tab)
	{
		if (f(*tab))
		{
			count++;
		}
		tab++;
	}
	return (count);
}

/* int	start_vowel(char *str)
{
	if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o'
		|| str[0] == 'u')
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char *strings[] = {"apple", "glasses", "orange", "grape", "eagle",
		"almond"};

	printf("Number of strings starting with a vowel: %d\n", ft_count_if(strings,
			&start_vowel));
	return (0);
} */