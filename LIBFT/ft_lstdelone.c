/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:51:56 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/09/11 21:14:34 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free (lst);
}

// #include "libft.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (!lst)
// 		return ;
// 	del(lst->content);
// 	free(lst);
// }
