/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:56:21 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/11 16:24:19 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	char			*cs;
	size_t			i;

	uc = (unsigned char)c;
	cs = (char *)s;
	i = 0;
	while (i < n)
	{
		*cs = uc;
		++cs;
		++i;
	}
	return (s);
}
