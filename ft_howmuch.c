#include "libftprintf.h"

int ft_howmuch(long n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return i;
}