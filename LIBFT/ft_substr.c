/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:40 by jessk             #+#    #+#             */
/*   Updated: 2023/08/07 23:23:24 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	size_t	index;
	char	*str;
	char	*substr;

	str = ((char *)s);
	counter = (size_t)start;
	index = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
	{
		return (NULL);
	}
	while (counter < (len + start) && str[counter] != '\0')
	{
		substr[index] = str[counter];
		index++;
		counter++;
	}
	substr[index] = '\0';
	return (substr);
}

/* #include <stdio.h>

int	main(void)
{
	const char *str = "Hello, world!";

	printf("Substring: %s\n", ft_substr(str, 7, 5));

	return (0);
} */
