/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:12 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/12 16:48:35 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new_lst;

	cur = lst;
	if (cur == NULL)
		return (NULL);
	new_lst = ft_lstnew(cur->content);
	if (new_lst == NULL)
		return (NULL);
	if (cur->next != NULL)
	{
		new_lst->next = ft_lstmap(cur->next, f, del);
		if (new_lst->next == NULL)
		{
			ft_lstclear(new_lst, del);
			return (NULL);
		}
	}
	new_lst->content = f(cur->content);
	return (new_lst);
}
