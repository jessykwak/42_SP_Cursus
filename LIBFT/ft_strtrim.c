/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:51:13 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/08/21 20:51:46 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Trims the contents of 'set' of the beggining and ending of the string 's1'

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while ((end > start) && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(((end - start) + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	index = 0;
	while (start <= end)
		str[index++] = s1[start++];
	str[index] = '\0';
	return (str);
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