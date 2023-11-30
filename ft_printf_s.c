/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:30:38 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:43:42 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		return (write(1, "(null)", 6));
	if (ft_putstr_fd(str, 1) < 0)
		return (-1);
	else
		return (ft_strlen(str));
}
