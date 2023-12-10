/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:45 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:45:51 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
		*len += 1;
	}
}
