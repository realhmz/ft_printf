
#include "libftprintf.h"
#include <stdio.h>

int ft_printf(const char*str,...)
{
	va_list ag;
	int i = 0;
	int len = 0;
	va_start(ag,str);

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while(str[i])
	{
		if (str[i] != '%' && str[i - 1] != '%')
		{
			ft_putchar(str[i]);
			len++;
		}
		if(str[i]=='%')
		{
			if(str[i+1]=='c')
				len += ft_putchar(va_arg(ag,int));
			else if (str[i+1] == 's')
				len += ft_putstr(va_arg(ag,char *));
			else if (str[i + 1] == 'x' || str[i + 1] == 'X')
				len += ft_put_hexa(va_arg(ag, int), str[i +1],1);
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				len += ft_putnbr(va_arg(ag,int),1);
			else if (str[i+1] == 'u')
				len +=  ft_put_unsigned(va_arg(ag ,unsigned int),1);
			else if (str[i + 1] == '%')
			{
				ft_putchar('%');
				len += 1;
			}
			i++;
		}
		i++;
  }
  return (len);

}
 int main()
  {
	//char str[] = "salam l3alam";

	//printf("%%");
	int a = ft_printf("hello|%d|%x|%%|%s|%u|",123,500,"  hello world  ",6100);
	printf ("||%d||",a);
   // ft_printf("%c\n",'c');
	//ft_printf("%d",560);
	

  }