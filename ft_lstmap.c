/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:12 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/11 16:38:40 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new_lst;

	cur = lst;
	new_lst = ft_lstnew(cur->content);
	if (new_lst == NULL)
		return (NULL);
	if (cur->next != NULL)
	{
		new_lst->next = ft_lstmap(cur->next, f, del);
		if (new_lst->next == NULL)
		{
			ft_lstdelone(new_lst, del);
			del(new_lst);
			return (NULL);
		}
	}
	else
	{
		cur->next = NULL;
	}
	new_lst->content = f(cur->content);
	return (new_lst);
}
