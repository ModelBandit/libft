/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:12:37 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/02 14:44:33 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	char	str[100];
	char	*c_dst;
	char	*c_src;
	int		i;

	c_src = src;
	i = 0;
	while (i < n)
	{
		str[i] = c_src[i];
		++i;
	}
	c_dst = dst;
	i = 0;
	while (i < n)
	{
		c_dst[i] = str[i];
		++i;
	}
	return (dst);
}
