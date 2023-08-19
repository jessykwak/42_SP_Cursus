/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:13:14 by jessk             #+#    #+#             */
/*   Updated: 2023/08/19 19:28:17 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns an array of strings. Split the string 's', using 'c' as the delimiter.

#include "libft.h"

static int	word_counter(const char *str, char c)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			words++;
		while (*str != c && *str)
			str++;
	}
	return (words);
}

static int	word_len(const char *str, char c)
{
	int	len;

	len = 0;
	while (*str != c && *str)
	{
		str++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		pos;
	int		index;
	char	**str;

	str = (char **)malloc(((word_counter(s, c)) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	pos = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			index++;
		else if (s[index] != c && *s)
		{
			str[pos] = ft_substr(s, index, word_len(&s[index], c));
			index = index + word_len(&s[index], c);
			pos++;
		}
	}
	str[pos] = NULL;
	return (str);
}

/* int	main(void)
{
	ft_split("||this|for|me|||||!|", '|');
	return (0);
} */