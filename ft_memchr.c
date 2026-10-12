/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 17:08:36 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/12 17:09:34 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sp;
	size_t	i;

	if (n <= 0)
		return (0);
	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)sp[i] == (unsigned char)c)
			return (&(sp[i]));
		++i;
	}
	return (0);
}
