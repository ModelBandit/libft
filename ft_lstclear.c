/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:56:19 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/13 08:56:04 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static t_list	*get_prev_target(t_list *lst, t_list *target);

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*cur;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	prev = *lst;
	cur = (*lst)->next;
	while (prev != NULL)
	{
		cur = ft_lstlast(*lst);
		prev = get_prev_target(*lst, cur);
		ft_lstdelone(cur, del);
		if (prev != NULL)
			prev->next = NULL;
	}
	*lst = NULL;
}

static t_list	*get_prev_target(t_list *lst, t_list *target)
{
	if ((uintptr_t)(lst->next) == (uintptr_t)NULL)
		return (NULL);
	else if ((uintptr_t)(lst->next) == (uintptr_t)target)
		return (lst);
	return (get_prev_target(lst->next, target));
}

// int main()
// {
// 	t_list * l =  ft_lstnew(malloc(1));
// 	for (int i = 0; i < 10; ++i)
// 		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
// 	ft_lstclear(&l, free);
// 	free(malloc(1));
// }