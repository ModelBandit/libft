/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:21:50 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/06 09:05:04 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*c_dst;
	char			*c_src;
	unsigned int	i;

	c_dst = dst;
	c_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*c_dst = *c_src;
		++c_dst;
		++c_src;
		++i;
	}
	return (dst);
}
