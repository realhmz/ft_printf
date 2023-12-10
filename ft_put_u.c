/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:47 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:37:48 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_put_unsigned(n / 10, len);
		ft_put_unsigned(n % 10, len);
	}
	else
	{
		ft_putchar(n + 48, len);
	}
}
