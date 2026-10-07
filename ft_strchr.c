/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:43:36 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/06 09:31:22 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*sp;
	unsigned long	i;
	unsigned long	size;

	sp = (char *)s;
	i = 0;
	size = ft_strlen(sp);
	while (i <= size)
	{
		if (sp[i] == (unsigned char)c)
			return (&(sp[i]));
		++i;
	}
	return (0);
}
