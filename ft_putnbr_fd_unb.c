/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:37:03 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/20 10:37:03 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_unb(unsigned int n, int fd)
{
	if (n == 0)
		if (ft_putchar_fd('0', fd) < 0)
			return (-1);
	if (n >= 10)
		if (ft_putnbr_fd(n / 10, fd) < 0)
			return (-1);
	if (ft_putchar_fd(n % 10 + '0', fd) < 0)
		return (-1);
	else
		return (1);
}
