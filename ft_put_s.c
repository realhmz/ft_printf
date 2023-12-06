#include "libftprintf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str && str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}