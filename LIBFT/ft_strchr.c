/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:09:50 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/17 01:54:33 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			break ;
		str++;
	}
	if (*str != (char)c)
		return (NULL);
	return (str);
}

/* #include <stdio.h>

int main (void)
{
	const char *str = "Hello, World!";
	char search = '@';

	if (((ft_strchr(str, search)) != NULL) && ((strchr(str, search)) != NULL))
	{
		printf("'%c' found: %ld\n", search, ft_strchr(str, search) - str);
		printf("'%c' found: %ld\n", search, strchr(str, search) - str);
	}
	else
	{
		printf("'%c' not found.\n", search);
	}
} */