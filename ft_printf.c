/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:01:22 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 15:36:56 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			result;

	va_start(args, format);
	result = ft_printf_checker(format, args);
	if (result < 0)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (result);
}
#include <stdio.h>
int	main()
{
	int	result, tresult, i;
	void	* test;
	char	*str = "Jass";
	result = ft_printf("%s\n%p\n%d", str, &test, INT_MAX);
	ft_printf("\n");
	ft_printf("%d", result);
	ft_printf("\n");
	tresult = printf("%s\n%p\n%d", str, &test, INT_MAX);
	ft_printf("\n");
	ft_printf("%d", tresult);
	ft_printf("\n");
}
