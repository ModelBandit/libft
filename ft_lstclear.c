/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:56:19 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/11 15:15:15 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static t_list	*get_prev_target(t_list *lst, t_list *target);

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*cur;

	if (lst == NULL || *lst == NULL)
		return ;
	prev = *lst;
	cur = (*lst)->next;
	while (*lst != NULL)
	{
		cur = ft_lstlast(*lst);
		if (cur == *lst)
		{
			ft_lstdelone(cur, del);
			*lst = NULL;
		}
		else
		{
			prev = get_prev_target(*lst, cur);
			ft_lstdelone(cur, del);
			prev->next = NULL;
		}
	}
}

static t_list	*get_prev_target(t_list *lst, t_list *target)
{
	if ((uintptr_t)(lst->next) == (uintptr_t)target)
		return (lst);
	return (get_prev_target(lst->next, target));
}
