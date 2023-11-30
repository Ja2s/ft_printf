/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:49:32 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/29 16:10:12 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stddef.h>

char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *format, ...);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(long int n, int fd);
int		ft_putnbr_fd_unb(unsigned int n, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_printf_symbol(void);
int		ft_putnbrbase_fd(unsigned long int n, int fd, char *base);
int		ft_strlen(const char *s);
int		ft_printf_checker(const char *format, va_list args);
int		ft_printf_x(va_list args);
int		ft_printf_id(va_list args);
int		ft_printf_s(va_list args);
int		ft_printf_c(va_list args);
int		ft_printf_u(va_list args);
int		ft_printf_mx(va_list args);
int		ft_printf_p(va_list args);

#endif