/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:12:38 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/06 10:38:19 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;
	size_t	max;

	d_len = ft_strlen(dst);
	s_len = ft_strlen((char *)src);
	i = d_len;
	j = 0;
	max = size - 1;
	if (size <= 0)
		return (s_len);
	while (i < max && src[j] != '\0')
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = '\0';
	if (size < d_len)
		return (size + s_len);
	else
		return (d_len + s_len);
}
