/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:51:13 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/04 22:08:32 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	while (src[len] != '\0')
		len++;
	while (index < (size - 1) && size > 0 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	index;

	index = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		dup[index] = s[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			break ;
		str++;
	}
	if (*str != c)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len1;
	int		len2;
	int		index;

	index = 0;
	if (!s1 || !set)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(set);
	str = (char *)malloc(((len1 - len2) - 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1)
	{
		while (s1 == s2)
		{
			
		}
		str[index] = s1;
		s1++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("Hello, world", ", "));

	return (0);
}

