/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 11:34:25 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 15:46:06 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	max;
	unsigned int	s_len;

	if (size <= 0)
		return (ft_strlen(src));
	max = size - 1;
	s_len = ft_strlen(src);
	i = 0;
	while (i < max)
	{
		dst[i] = src[i];
		++i;
	}
	return (s_len);
}

static unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}
