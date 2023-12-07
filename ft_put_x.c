#include "ft_printf.h"

int	ft_put_hexa(unsigned int n, char c, int i)
{
	char	*t;
	if (c == 'X')
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	if (n >= 16)
	{
		i +=ft_put_hexa(n / 16, c, i);
		ft_put_hexa(n % 16, c, i);
	}
	else
	{
		ft_putchar(t[n]);
	}
	return (i);
}
