/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:37:03 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/20 10:37:03 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase_fd(unsigned long int n, int fd, char *base)
{
	int		count;

	count = 0;
	{
		if (n >= 16)
			count = ft_putnbrbase_fd(n / 16, fd, base);
		if (count < 0)
			return (-1);
		if (ft_putchar_fd(base[n % 16], fd) < 0)
			return (-1);
		else
			count++;
	}
	return (count);
}
