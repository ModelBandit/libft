/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:12 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/13 15:06:23 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new_lst;
	void	*data;

	cur = lst;
	data = f(cur->content);
	if (cur == NULL || data == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = ft_lstnew(data);
	if (new_lst == NULL)
	{
		del(data);
		return (NULL);
	}
	if (cur->next != NULL)
	{
		new_lst->next = ft_lstmap(cur->next, f, del);
		if (new_lst->next == NULL)
		{
			ft_lstdelone(new_lst, del);
			return (NULL);
		}
	}
	return (new_lst);
}
