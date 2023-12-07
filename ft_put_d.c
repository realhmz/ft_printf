#include "ft_printf.h"

static void ft_char(char c)
{
    write(1,&c,1);
}

int	ft_putnbr(int n,int len)
{
	if (n == -2147483648)
	{
		ft_char('-');
		ft_char('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_char('-');
		n *= -1;
	}
	if (n >= 10)
	{
		len += ft_putnbr(n / 10,len);
		ft_putnbr(n % 10,len);
	}
	else
	{
		ft_char(n + 48);
	}
	return len;
}
