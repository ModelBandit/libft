/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:21:22 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/09 16:47:24 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_itoa(char *n_str, int len, int n);

char	*ft_itoa(int n)
{
	char	*n_str;
	int		str_len;
	int		num_cpy;

	n_str = NULL;
	str_len = 0;
	num_cpy = n;
	if (n == 0)
	{
		n_str = ft_calloc(sizeof(char), 2);
		n_str[0] = '0';
		return (n_str);
	}
	if (n < 0)
		++str_len;
	while (num_cpy != 0)
	{
		++str_len;
		num_cpy = num_cpy / 10;
	}
	return (fill_itoa(n_str, str_len, n));
}
// -2147483648
static char	*fill_itoa(char *n_str, int len, int n)
{
	n_str = ft_calloc(sizeof(char), len + 1);
	if (n == INT_MIN)
	{
		n_str[0] = '-';
		n_str[len - 1] = '0' + (INT_MAX % 10) + 1;
		n = n / 10;
		n *= -1;
		--len;
	}
	else if (n < 0)
	{
		n_str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		n_str[len - 1] = '0' + (n % 10);
		n = n / 10;
		--len;
	}
	return (n_str);
}
