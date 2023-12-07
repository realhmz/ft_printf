#include "ft_printf.h"


int ft_put_p(unsigned long n, int i)
{
	char *t;

	t = "0123456789abcdef";
	if (n >= 16)
	{
		i +=ft_put_p(n / 16, i);
		ft_put_p(n % 16, i);
	}
	else
	{
		ft_putchar(t[n]);
	}
	return (i);
}
