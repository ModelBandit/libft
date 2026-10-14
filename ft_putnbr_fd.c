/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:30:57 by chchoi            #+#    #+#             */
/*   Updated: 2026/10/13 17:01:31 by chchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*n_str;

	n_str = ft_itoa(n);
	if (n_str == NULL)
		return ;
	ft_putstr_fd(n_str, fd);
	free(n_str);
}
