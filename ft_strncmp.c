/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:27:27 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/06 11:51:12 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char			*ps1;
	char			*ps2;
	unsigned long	i;

	if (n == 0)
		return (0);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	i = 0;
	while (i < n && *ps1 != '\0' && *ps2 != '\0')
	{
		if (*ps1 - *ps2 != 0)
			return ((unsigned char)(*ps1) - (unsigned char)(*ps2));
		++ps1;
		++ps2;
		++i;
	}
	if ((*ps1 == '\0' || *ps2 == '\0') && *ps1 - *ps2 != 0)
		return ((unsigned char)(*ps1) - (unsigned char)(*ps2));
	else
		return (0);
}
