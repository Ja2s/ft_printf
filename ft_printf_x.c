/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:15:42 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:56:08 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(va_list args)
{
	unsigned int	nb;
	int				count;
	char			*base;

	base = "0123456789abcdef";
	count = 0;
	nb = va_arg(args, int);
	count = ft_putnbrbase_fd(nb, 1, base);
	return (count);
}
