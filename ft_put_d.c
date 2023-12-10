/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:37 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:37:38 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == (-2147483648))
	{
		write(1, "-2147483648", 11);
		*len += 11;
	}
	else if (n < 0 && n != (-2147483648))
	{
		ft_putchar('-', len);
		ft_putnbr(-n, len);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr((n % 10), len);
	}
	else
		ft_putchar((n + 48), len);
}
