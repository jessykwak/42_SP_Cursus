/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 00:00:40 by jessk             #+#    #+#             */
/*   Updated: 2023/08/04 00:02:23 by jessk            ###   ########.fr       */
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
	counter = 0;
	while (counter < ((size_t)start))
		counter++;
	while (counter < len && str[counter] != '\0')
	{
		substr[index] = str[counter];
		index++;
		counter++;
	}
}