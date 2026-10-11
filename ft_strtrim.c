/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:11:06 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/11 17:28:09 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	unsign_len(char const *s1);
static int	check_tokens(char c, char *tokens);
static char	*my_alloc(size_t ns_start, size_t ns_end);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	i;
	size_t	ns_start;
	size_t	ns_end;

	i = 0;
	while (s1[i] != '\0' && check_tokens(s1[i], (char *)set))
		++i;
	ns_start = i;
	i = unsign_len(s1);
	while (ns_start < i + 1 && check_tokens(s1[i], (char *)set))
		--i;
	ns_end = i + 1;
	i = 0;
	new_str = my_alloc(ns_start, ns_end);
	if (new_str == NULL)
		return (NULL);
	while (i < ns_end - ns_start)
	{
		new_str[i] = s1[ns_start + i];
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}

static int	unsign_len(char const *s1)
{
	size_t	i;

	i = ft_strlen(s1);
	if (i != 0)
		i -= 1;
	return (i);
}

static int	check_tokens(char c, char *tokens)
{
	while (*tokens != '\0')
	{
		if (c == *tokens)
			return (1);
		++tokens;
	}
	return (0);
}

static char	*my_alloc(size_t ns_start, size_t ns_end)
{
	if (ns_end > ns_start)
		return ((char *)malloc(ns_end - ns_start + 1));
	return ((char *)malloc(1));
}

// int main()
// {
//     char *s = "   xxx   xxx";
//     char *set = " x";
//     char *new_str = ft_strtrim(s, set);

//     free(new_str);
// }