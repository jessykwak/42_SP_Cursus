/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:45 by jessk             #+#    #+#             */
/*   Updated: 2023/08/19 19:28:39 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns a pointer to the first occurence of 'c' in the string 's'

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return (str + len);
		len--;
	}
	return (NULL);
}

/* #include <stdio.h>

int main (void)
{
	const char *str = "Hello, World!";
	char search = ' ';

	if (((ft_strrchr(str, search)) != NULL) && ((strrchr(str, search)) != NULL))
	{
		printf("'%c' found at: %ld\n", search, ft_strrchr(str, search) - str);
		printf("'%c' found at: %ld\n", search, strrchr(str, search) - str);
	}
	else
	{
		printf("'%c' not found.\n", search);
	}
} */