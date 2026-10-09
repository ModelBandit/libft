/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:35:30 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/09 15:38:54 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*build_set_strtrim(char const *s, char c);
static size_t	count_ptr(char *s, char c);
static char		**set_arr(char **s_arr, char const *s, char c, size_t len);
static char		*fill_str(char **s_arr, char const *s, size_t cur_count,
					size_t str_len);

char	**ft_split(char const *s, char c)
{
	char	**ptr_arr;
	char	*s_ptr;
	size_t	c_count;

	s_ptr = build_set_strtrim(s, c);
	c_count = 0;
	if (ft_strlen(s_ptr) == 0)
		c_count = 0;
	else
		c_count = count_ptr(s_ptr, c);
	// else if (s_ptr != NULL
	//     && *s_ptr != '\0')
	// else
	// 	c_count = 1;
	ptr_arr = (char **)malloc((c_count + 1) * sizeof(char *));
	if (ptr_arr == NULL)
		return (NULL);
	if (set_arr(ptr_arr, s_ptr, c, c_count) == NULL)
	{
		free(ptr_arr);
		return (NULL);
	}
	ptr_arr[c_count] = NULL;
	free(s_ptr);
	return (ptr_arr);
}

static char	*build_set_strtrim(char const *s, char c)
{
	char		*c_str;
	char const	*s_ptr;

	c_str = (char *)ft_calloc(2, sizeof(char));
	c_str[0] = c;
	s_ptr = ft_strtrim(s, (const char *)c_str);
	free(c_str);
	return ((char *)s_ptr);
}

static size_t	count_ptr(char *s, char c)
{
	char const	*s_ptr;
	size_t		c_count;

	s_ptr = s;
	c_count = 0;
	while (s_ptr != NULL && *s_ptr != '\0')
	{
		++c_count;
		while (*s_ptr == c)
			++s_ptr;
		s_ptr = ft_strchr(s_ptr, c);
	}
	return (c_count);
}

static char	**set_arr(char **s_arr, char const *s, char c, size_t len)
{
	char	*end_ptr;
	size_t	cur_count;
	size_t	str_len;

	end_ptr = NULL;
	cur_count = 0;
	while (cur_count < len)
	{
		end_ptr = ft_strchr(s, c);
		if (end_ptr == NULL)
			end_ptr = ft_strchr(s, '\0'); //
		str_len = 0;
		if (s[str_len] == c)
		{
			s = end_ptr + 1;
			continue ;
		}
		while (&(s[str_len]) != &end_ptr[0])
			++str_len;
		s = fill_str(s_arr, s, cur_count, str_len + 1);
		if (s == NULL)
			return (NULL);
		else if (*s != '\0')
			++s;
		++cur_count;
	}
	return (s_arr);
}

static char	*fill_str(char **s_arr, char const *s, size_t cur_count,
		size_t str_len)
{
	size_t	i;

	i = 0;
	if (str_len == 0)
	{
		s_arr[cur_count] = NULL;
		return ((char *)&(s[str_len]));
	}
	s_arr[cur_count] = (char *)malloc(str_len);
	if (s_arr[cur_count] == NULL)
	{
		while (i < cur_count)
		{
			free(s_arr[i]);
			++i;
		}
		return (NULL);
	}
	ft_strlcpy(s_arr[cur_count], s, str_len);
	return ((char *)&(s[str_len - 1]));
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "--1-2--3---4----5-----42";
// 	char **tab = ft_split(s, '-');
// 	int i = 0;

// 	while (tab[i] != NULL)
// 	{
// 		printf("%d - \"%s\"\n", i, tab[i]);
// 		free(tab[i]);
// 		++i;
// 	}
// 	free(tab[i]);
// 	free(tab);
// }