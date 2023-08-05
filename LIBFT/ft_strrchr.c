/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:45 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 19:47:15 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (str[len] == c)
			break ;
		len--;
	}
	if (str[len] != c)
		return (NULL);
	return (str + len);
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