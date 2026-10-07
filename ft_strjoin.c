/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:21:23 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/07 17:32:37 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = 0;
	str = (char *)malloc(s1_len + s2_len + 1);
	if (str == NULL)
		return (NULL);
	while (i < s1_len)
	{
		str[i] = s1[i];
		++i;
	}
	while (j < s2_len)
	{
		str[i + j] = s2[j];
		++j;
	}
	str[i + j] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char * s = ft_strjoin("tripouille", "42");
//     printf("%d\n", strcmp(s, "tripouille42"));
// }
/*
too less NULL
*/