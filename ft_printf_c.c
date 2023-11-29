/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:43:17 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:37:34 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(va_list args)
{
	int	c;

	c = va_arg(args, int);
	if (ft_putchar_fd(c, 1) < 0)
		return (-1);
	else
		return (1);
}
