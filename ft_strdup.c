/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:31:24 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/13 17:43:28 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*s_dup;

	i = 0;
	size = ft_strlen(s) + 1;
	if (size == 0)
		return (NULL);
	s_dup = (char *)malloc(size);
	if (s_dup == NULL)
		return (NULL);
	while (i < size)
	{
		s_dup[i] = s[i];
		++i;
	}
	return (s_dup);
}
