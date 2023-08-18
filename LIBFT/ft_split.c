/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:13:14 by jessk             #+#    #+#             */
/*   Updated: 2023/08/18 00:17:47 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			while (str[i] != c && str[i] != '\0')
				i++;
			words++;
		}
	}
	return (words);
}

static int	word_len(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != c)
	{
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		pos;
	int		index;
	char	**str;

	str = (char **)malloc((word_counter(s, c)) * sizeof(char *));
	if (!s || !str)
		return (NULL);
	pos = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			index++;
		else if (s[index] != c && s[index] != '\0')
		{
			str[pos] = ft_substr(s, index, word_len(&s[index], c));
			index = index + word_len(&s[index], c);
			pos++;
		}
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	ft_split("lorem ipsum dolor sit amet,
		consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,
		dignissim sit amet, adipiscing nec, ultricies sed,
		dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a,
		semper congue, euismod non, mi.", 'i');
	return (0);
} */