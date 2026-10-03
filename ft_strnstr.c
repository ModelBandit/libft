/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:00:51 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 15:43:32 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str);

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && big[i + j] != '\0'
				&& little[j] != '\0')
			{
				++j;
			}
			if (little[j] == '\0' && j == ft_strlen((char *)little))
				return (&(((char *)big)[i]));
		}
		++i;
	}
	return (0);
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
