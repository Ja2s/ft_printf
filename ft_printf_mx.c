/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:55:37 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:58:56 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_mx(va_list args)
{
	unsigned int	nb;
	int				count;
	char			*base;

	base = "0123456789ABCDEF";
	count = 0;
	nb = va_arg(args, int);
	count = ft_putnbrbase_fd(nb, 1, base);
	if (count < 0)
		return (-1);
	else
		return (count);
}
