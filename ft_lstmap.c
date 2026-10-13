/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:12 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/13 15:46:05 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstsafemap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*new_lst;
	void	*data;

	cur = lst;
	if (cur == NULL || f == NULL || del == NULL)
		return (NULL);
	data = f(cur->content);
	if (data == NULL)
		return (NULL);
	new_lst = ft_lstnew(data);
	if (new_lst == NULL)
	{
		del(data);
		return (NULL);
	}
	if (cur->next != NULL)
	{
		new_lst->next = ft_lstsafemap(cur, f, del);
		if (new_lst->next == NULL)
		{
			ft_lstdelone(cur, del);
			return (NULL);
		}
	}
	return (new_lst);
}

static t_list	*ft_lstsafemap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*new_lst;

	new_lst = ft_lstmap(lst->next, f, del);
	if (new_lst == NULL)
		return (NULL);
	return (new_lst);
}
