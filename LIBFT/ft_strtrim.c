/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:51:13 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/19 23:02:13 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Trims the contents of 'set' of the beggining and ending of the string 's1'

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*trimmed;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_calloc(1, sizeof(char)));
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]))
		len--;
	trimmed = ft_calloc((len + 2), sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, len + 2);
	return (trimmed);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "lost my cool";
// 	char	*strtrim;
	
// 	if (!(strtrim = ft_strtrim(s1, "lo")))
// 		printf("NULL");
// 	else
// 		printf("%s", strtrim);
// 	if (strtrim == s1)
// 		printf("\nA new string was not returned");
// }
// 