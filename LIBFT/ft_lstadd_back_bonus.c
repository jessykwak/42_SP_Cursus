/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessk <jessk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:02:23 by jessk             #+#    #+#             */
/*   Updated: 2023/08/24 22:34:13 by jessk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	while (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	aux = *lst;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	new->next = NULL;
}
