/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:12:38 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 15:12:45 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	max;

	i = 0;
	j = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen((char *)src);
	max = size - 1;
	if (size <= 0)
		return (s_len);
	while (dst[i] != '\0')
		++i;
	while (i < max && src[j] != '\0')
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}

static unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}
