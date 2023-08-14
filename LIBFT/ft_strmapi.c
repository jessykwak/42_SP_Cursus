/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 01:06:39 by jessk             #+#    #+#             */
/*   Updated: 2023/08/14 01:45:39 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s); */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	index;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	index = 0;
	while (index <= len - 1)
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

/* char	test_function(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        return (c >= 'a' && c <= 'z' ? c - ('a' - 'A') : c);
    }
    else
    {
        return (c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c);
    }
}

int	main(void)
{
	const char	*original;
	char		*modified;

	original = "Hello, World!";
	modified = ft_strmapi(original, test_function);
	if (modified)
	{
		printf("Original: %s\n", original);
		printf("Modified: %s\n", modified);
		free(modified);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
 */