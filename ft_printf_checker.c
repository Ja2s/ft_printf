/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_checker.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:37:16 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:59:54 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_findformat(const char *format, va_list args);

int	ft_printf_checker(const char *format, va_list args)
{
	int	count;
	int	result;

	result = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0' && ft_strchr("cidsuxXp%", *format) != NULL)
				count = ft_findformat(format++, args);
			else if (*format != '\0')
				count = ft_putchar_fd('%', 1);
			if (count < 0)
				return (-1);
			result += count;
		}
		else
		{
			if (ft_putchar_fd(*format++, 1) < 0)
				return (-1);
			result++;
		}
	}
	return (result);
}

static int	ft_findformat(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 's')
		count = ft_printf_s(args);
	else if (*format == 'c')
		count = ft_printf_c(args);
	else if (*format == 'd' || *format == 'i')
		count = ft_printf_id(args);
	else if (*format == 'u')
		count = ft_printf_u(args);
	else if (*format == 'x')
		count = ft_printf_x(args);
	else if (*format == 'X')
		count = (ft_printf_mx(args));
	else if (*format == '%')
		count = ft_printf_symbol();
	else if (*format == 'p')
		count = (ft_printf_p(args));
	return (count);
}
