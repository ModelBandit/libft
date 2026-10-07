/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:12:37 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/06 09:05:33 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			str[100];
	char			*c_dst;
	char			*c_src;
	unsigned int	i;

	c_src = (char *)src;
	i = 0;
	while (i < n)
	{
		str[i] = c_src[i];
		++i;
	}
	c_dst = dst;
	i = 0;
	while (i < n)
	{
		c_dst[i] = str[i];
		++i;
	}
	return (dst);
}
