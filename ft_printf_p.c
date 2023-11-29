/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:16:27 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:43:04 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(va_list args)
{
	int			count;
	void		*variable;
	char		*base;

	base = "0123456789abcdef";
	count = 0;
	variable = va_arg(args, void *);
	if (!variable)
		return (write(1, "(nil)", 5));
	if (ft_putstr_fd("0x", 1) < 0)
		return (-1);
	count = ft_putnbrbase_fd((unsigned long int)variable, 1, base);
	return (count + 2);
}
