/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:40 by jessk             #+#    #+#             */
/*   Updated: 2023/08/19 19:30:08 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns a copy of part of the string 's', so a substring of 's'.
//it copies 's' beggining from the position 'start' by the size of 'len'.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	size_t	index;
	char	*substr;

	counter = (size_t)start;
	index = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !substr)
		return (NULL);
	while (counter < ft_strlen(s) && index < len)
	{
		substr[index] = s[counter];
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
