/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 00:13:14 by jessk             #+#    #+#             */
/*   Updated: 2023/08/08 00:20:23 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			break ;
		str++;
	}
	if (*str != c)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int	pos;

	pos = 0;
	while (ft_strchr(s, c))
	pos++;
	
}