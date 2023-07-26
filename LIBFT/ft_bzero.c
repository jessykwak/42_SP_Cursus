/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:45:51 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/24 20:59:49 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    size_t index;

    index = 0;
    while (index < n)
    {
        ((unsigned char *)s)[index] = '\0';
        index++;
    }
}