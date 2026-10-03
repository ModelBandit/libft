/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:49:52 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/03 10:56:14 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_tokens(char c, char *tokens);

int	ft_atoi(char *str)
{
	int	oper;
	int	num;

	oper = 1;
	num = 0;
	while (check_tokens(*str, " \t\n\v\f\r") > 0)
		++str;
	while (check_tokens(*str, "+-") > 0)
	{
		if (*str == '-')
			oper = oper * -1;
		++str;
	}
	while (check_tokens(*str, "0123456789") > 0)
	{
		num = num * 10;
		num += *str - '0';
		++str;
	}
	return (num * oper);
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
