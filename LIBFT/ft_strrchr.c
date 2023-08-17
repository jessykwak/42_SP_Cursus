/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:45 by jessk             #+#    #+#             */
/*   Updated: 2023/08/17 01:47:21 by jessk            ###   ########.fr       */
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
		if (str[len] == (char)c)
			return (str + len);
		len--;
	}
	if (str[len] == (char)c)
		return (str + len);
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