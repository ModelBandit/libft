/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 08:27:46 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 10:02:09 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	char			*cs1;
	char			*cs2;
	char			tmp;
	unsigned int	i;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		tmp = cs1[i] - cs2[i];
		if (tmp != 0)
			return (tmp);
		++i;
	}
	return (0);
}
