/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:01:22 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/23 17:06:26 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_findformat(const char *format, va_list args);

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count;

    count = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
			count = ft_findformat(strchr("cspdiuxX", *format));
        }
		return (count);
    }  
}
static int ft_findformat(const char *format, va_list args)
{
	size_t	count;

	count = 0;
	if (*format == 's')   //string
	{
		const char  *str = va_arg(args, const char *);
		ft_putstr_fd(*format, 1);           //a verifier
		count += ft_strlen(str);
	}
	else if (*format == 'd' || *format == 'i')  //decimal or "integer??"
	{
			int nb = va_arg(args, int);
			ft_putnbr_fd(nb, 1);           //a verifier 
			while (nb > 0)
		{
			nb /= 10;
			count++;
		}
	}
	else if (*format == 'c')  //character
	{
		const char c = va_arg(args, const char);
		ft_putchar_fd(c, 1);
		count += 1;
	}
    else if (*format == 'u')
	{
		unsigned int unb = va_arg(args, unsigned int);
		ft_putnbr_fd(unb, 1);
		while (unb >= 10)
		{
			unb /= 10;
			count++;
		}
		count += 1;
	}
	else if (*format == '%')
	{
		const char c = va_arg(args, const char);
		ft_putchar_fd('%', 1);
		count += 1;
	}
}
int main()
{
    ft_printf("Hello, %s! This is a number: %d, and a character: %c, and an unsigned number: %u%%\n",
              "world", 42, 'A', 123);
    return 0;
}
