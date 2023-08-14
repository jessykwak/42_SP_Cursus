/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:13:14 by jessk             #+#    #+#             */
/*   Updated: 2023/08/09 01:32:50 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_duplicator(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	finish;
	size_t	pos;
	int		start;
	char	**str;

	str = malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (0);
	finish = 0;
	pos = 0;
	start = -1;
	while (finish <= ft_strlen(s))
	{
		if (s[finish] != c && start < 0)
			start = finish;
		else if ((s[finish] == c || finish == ft_strlen(s)) && start >= 0)
		{
			str[pos++] = word_duplicator(s, start, finish);
			start = -1;
		}
		finish++;
	}
	str[pos] = '\0';
	return (str);
}

/* int	main(void)
{
	char const *input = "lorem ipsum dolor sit amet";
	char delimiter = ' ';
	char **split_result = ft_split(input, delimiter);

	if (split_result)
	{
		for (int i = 0; split_result[i] != NULL; i++)
		{
			printf("[%d]: %s\n", i, split_result[i]);
			free(split_result[i]);
		}
		free(split_result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
} */