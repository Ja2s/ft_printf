/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:25:29 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:51:47 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(va_list args)
{
	unsigned int	unb;
	int				count;

	count = 0;
	unb = va_arg(args, unsigned int);
	if (unb == 0)
		return (ft_putchar_fd('0', 1));
	if (ft_putnbr_fd_unb(unb, 1) < 0)
		return (-1);
	else
	{
		while (unb != 0)
		{
			unb /= 10;
			count++;
		}
	}
	return (count);
}
