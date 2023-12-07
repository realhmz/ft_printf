#include "ft_printf.h"

static void ft_char(char c)
{
    write(1,&c,1);
}

int	ft_put_unsigned(unsigned int n,int len)
{
	if (n >= 10)
	{
		len += ft_put_unsigned(n / 10,len);
		ft_put_unsigned(n % 10,len);
	}
	else
	{
		ft_char(n + 48);
	}
	return len;
}
