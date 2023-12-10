/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:25 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:45:18 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_check(char s, int *len, va_list ag)
{
	if (s == 'c')
		ft_putchar(va_arg(ag, int), len);
	else if (s == 's')
		ft_putstr(va_arg(ag, char *), len);
	else if (s == 'x' || s == 'X')
		ft_put_hexa(va_arg(ag, int), s, len);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(ag, int), len);
	else if (s == 'p')
	{
		ft_putstr("0x", len);
		ft_put_p(va_arg(ag, unsigned long), len);
	}
	else if (s == 'u')
		ft_put_unsigned(va_arg(ag, unsigned int), len);
	else if (s == '%')
		ft_putchar('%', len);
	return (*len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ag, str);
	while (str[i])
	{
		while (str[i] && str[i] != '%')
		{
			ft_putchar(str[i], &len);
			i++;
		}
		if (str[i] == '\0' || str[i + 1] == '\0')
			break ;
		if (str[i] && str[i] == '%')
		{
			i++;
			ft_check(str[i], &len, ag);
		}
		i++;
	}
	return (len);
}
