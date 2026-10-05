/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:43:36 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/05 14:14:00 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str);

char	*ft_strchr(const char *s, int c)
{
	char			*sp;
	unsigned int	i;
	unsigned int	size;

	sp = (char *)s;
	i = 0;
	size = ft_strlen(sp);
	while (i <= size)
	{
		if (sp[i] == (unsigned char)c)
			return (&(sp[i]));
		++i;
	}
	return (0);
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
