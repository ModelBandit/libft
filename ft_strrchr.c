/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:49:52 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/14 18:03:47 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sp;
	size_t	i;

	sp = (char *)s;
	i = ft_strlen(sp);
	while (i > 0)
	{
		if ((unsigned char)sp[i] == (unsigned char)c)
			return (&(sp[i]));
		--i;
	}
	if ((unsigned char)sp[i] == (unsigned char)c)
		return (&(sp[i]));
	return (0);
}
