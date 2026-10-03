/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 08:27:46 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 17:27:23 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	char	*cs1;
	char	*cs2;
	unsigned int	i;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if(cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		else if ((unsigned char)cs1[i] != (unsigned char)cs2[i])
			return ((unsigned char)cs1[i] - (unsigned char)cs2[i]);
		++i;
	}
	return (0);
}
