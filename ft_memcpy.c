/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:21:50 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/02 13:03:14 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char	*c_dst;
	char	*c_src;
	int		i;

	c_dst = dst;
	c_src = src;
	i = 0;
	while (i < n)
	{
		*c_dst = *c_src;
		++c_dst;
		++c_src;
		++i;
	}
	return (dst);
}
