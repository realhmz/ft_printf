
#include "libftprintf.h"
#include <stdio.h>


int ft_printf(const char*str,...)
{
  va_list ag;
  int i = 0;
  int len = 0;
  va_start(ag,str);

  while(str[i])
  {
	 if(str[i]=='%')
	 {
		if(str[i+1]=='c')
			len += ft_putchar(va_arg(ag,int));
		else if (str[i+1] == 's')
		{
				len += ft_putstr(va_arg(ag,char *));
				i++;
		}
		else if (str[i + 1] == 'd')
		{
			len += ft_howmuch(ft_putnbr(va_arg(ag,int)));

			i++;
		}
		else if (str[i + 1] == '%')
		{
		  ft_putchar('%');
		  len += 1;
		}
	  i++;
	 }
		i++;

  }
	return len;

}
 int main()
  {
	//char str[] = "salam l3alam";

	//printf("%%");
	printf("|%d|",ft_printf("%d",4654));
   // ft_printf("%c\n",'c');
	//ft_printf("%d",560);

  }