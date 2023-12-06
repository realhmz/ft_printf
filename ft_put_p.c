#include "libftprintf.h"

int ft_howmuch(long n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return i;
}