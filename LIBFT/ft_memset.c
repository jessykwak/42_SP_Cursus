/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:39:45 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/07/24 20:59:35 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *ptr, int value, size_t num)
{
    size_t index;

    index = 0;
    while (index < num)
    {
        ((unsigned char *)ptr)[index] = ((unsigned char)value);
        index++;
    }
    return (ptr);
}

#include <stdio.h>

int main(void)
{
    char buffer[10] = "arroz";

    printf("Buffer after memset: \"%p\"\n", memset(buffer, 0, sizeof(buffer)));
    printf("Buffer after memset: \"%p\"\n", ft_memset(buffer, 0, sizeof(buffer)));

    return 0;
}