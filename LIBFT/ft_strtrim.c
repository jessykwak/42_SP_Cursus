/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:51:13 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/08 00:14:18 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
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
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while ((end > start) && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(((end - start) + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (start <= end)
		str[index++] = s1[start++];
	str[index] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	s1[] = "lost my cool";
	char	*strtrim;
	
	if (!(strtrim = ft_strtrim(s1, "lo")))
		printf("NULL");
	else
		printf("%s", strtrim);
	if (strtrim == s1)
		printf("\nA new string was not returned");
}
 */