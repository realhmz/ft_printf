/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:50 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:37:51 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hexa(unsigned int n, char c, int *len)
{
	char	*t;

	if (c == 'X')
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	if (n >= 16)
	{
		ft_put_hexa(n / 16, c, len);
		ft_put_hexa(n % 16, c, len);
	}
	else
	{
		ft_putchar(t[n], len);
	}
}
