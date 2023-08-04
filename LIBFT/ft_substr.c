/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:40 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 00:36:32 by jessk            ###   ########.fr       */
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
	substr = (char *)malloc((len + 1) * sizeof(char));
	counter = 0;
	index = 0;
	if (substr == NULL)
	{
		return (NULL);
	}
	while (counter < start)
		counter++;
	while (counter < (len + start) && str[counter] != '\0')
	{
		substr[index] = str[counter];
		index++;
		counter++;
	}
	substr[index] = '\0';
	return (substr);
}

/* int	main(void)
{
	const char *str = "Hello, world!";

	printf("Substring: %s\n", ft_substr(str, 7, 5));

	return (0);
} */