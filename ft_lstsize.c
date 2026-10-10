/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:55:17 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/10 15:58:56 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(t_list *node, int cur);

int	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (0);
	return (get_length(lst, 1));
}

static int	get_length(t_list *node, int cur)
{
	if (node->next != NULL)
		return (get_length(node->next, cur + 1));
	return (cur);
}
