/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:13:08 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/04 21:40:57 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	char	*str;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc((len + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		str[len] = s1[len];
		len++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		str[len2 + len] = s2[len2];
		len2++;
	}
	str[len2 + len] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	const char	*str1 = "Hello, ";
	const char	*str2 = "world!";
	char		*joinedstr = ft_strjoin(str1, str2);

	if (joinedstr != NULL)
	{
		printf("Joined String: %s\n", joinedstr);
		free(joinedstr);
	}
	else
	{
		printf("Memory allocation failed for joinedstr.\n");
	}

	return (0);
} */
