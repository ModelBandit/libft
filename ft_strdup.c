/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:31:24 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/06 17:19:09 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*s_dup;

	i = 0;
	size = ft_strlen(s);
	s_dup = (char *)malloc(size + 1);
	if (s_dup == NULL)
		return (NULL);
	while (i < size)
	{
		s_dup[i] = s[i];
		++i;
	}
	s_dup[i] = '\0';
	return (s_dup);
}
