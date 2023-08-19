/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 01:06:39 by jessk             #+#    #+#             */
/*   Updated: 2023/08/19 19:25:04 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns a copy of the string 's' that passed through the function 'f'

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	index;

	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	index = 0;
	while (index < len)
	{
		str[index] = f(index, s[index]);
		index++;
	}
	return (str);
}

/* char	test_function(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		return (c >= 'a' && c <= 'z' ? c - 32 : c);
	}
	else
	{
		return (c >= 'A' && c <= 'Z' ? c + 32 : c);
	}
}

int	main(void)
{
	const char	*original;
	char		*modified;

	original = "Hello, World!";
	modified = ft_strmapi(original, test_function);
	printf("Original: %s\n", original);
	printf("Modified: %s\n", modified);
	free(modified);
}
 */