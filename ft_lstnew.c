/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:37 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/10 15:55:41 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cur;

	cur = (t_list *)malloc(sizeof(t_list));
	if (cur == NULL)
		return (NULL);
	cur->content = content;
	cur->next = NULL;
	return (cur);
}
