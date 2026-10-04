/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:49:52 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/04 15:00:56 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str);

char	*ft_strrchr(const char *s, int c)
{
	char	*sp;
	int		i;

	sp = (char *)s;
	i = ft_strlen(sp);
	while (i >= 0)
	{
		if (sp[i] == (unsigned char)c)
			return (&(sp[i]));
		--i;
	}
	return (0);
}

static int	ft_strlen(char *str)
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
