/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:42 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:37:43 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_p(unsigned long n, int *len)
{
	char	*t;

	t = "0123456789abcdef";
	if (n >= 16)
	{
		ft_put_p(n / 16, len);
		ft_put_p(n % 16, len);
	}
	else
	{
		ft_putchar(t[n], len);
	}
}
