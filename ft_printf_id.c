/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:58:01 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:40:30 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_id(va_list args)
{
	long	nb;
	int		count;

	count = 0;
	nb = va_arg(args, int);
	count = ft_putnbr_fd(nb, 1);
	if (count < 0)
		return (-1);
	return (count);
}
