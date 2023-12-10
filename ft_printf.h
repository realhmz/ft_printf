/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:37:29 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/10 22:46:26 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr(int n, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_put_p(unsigned long n, int *len);
void	ft_put_hexa(unsigned int n, char c, int *len);
void	ft_put_unsigned(unsigned int n, int *len);
int		ft_printf(const char *str, ...);

#endif
