/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:27:27 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/04 15:48:21 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	char			*ps1;
	char			*ps2;
	unsigned int	i;

	if (n == 0)
		return (0);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	i = 0;
	while (i < n && *ps1 != '\0' && *ps2 != '\0')
	{
		if (*ps1 - *ps2 != 0)
			return (unsigned char)(*ps1) - (unsigned char)(*ps2);
		++ps1;
		++ps2;
		++i;
	}
	if ((*ps1 == '\0' || *ps2 == '\0') && *ps1 - *ps2 != 0)
		return (unsigned char)(*ps1) - (unsigned char)(*ps2);
	else
		return (0);
}
