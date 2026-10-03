/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:27:27 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 09:02:46 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	char	*ps1;
	char	*ps2;
	int		i;

	ps1 = (char *)s1;
	ps2 = (char *)s2;
	i = 0;
	while (i < n && ps1[i] != '\0' && ps2[i] != '\0')
	{
		++i;
	}
	i -= 1;
	if (ps1[i] - ps2[i] != 0)
		return (1);
	else
		return (0);
}
