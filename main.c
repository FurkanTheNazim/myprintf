#include <stdarg.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int num;
    int i;
    int count;

    count =
    i = 0;
    while (format[i])
    {
        if(format[i] == '%')
        {   
            i++;
            if(format[i] == 'c')
                ft_putchar(va_arg(ap, int));
                i++;
                count += ft_strlen();
            else if(format[i] == 's')
                ft_putstr(va_arg(ap, char *));
                i++;
                count += ft_strlen();
            else if(format[i] == 'p')
                ft_putstr(va_arg(ap, void *));
                i++;
                count += ft_strlen();
            else if(format[i] == 'd' || format[i] == 'i')
                ft_putnbr(va_arg(ap, int));
                i++;
                count += ft_strlen();
            else if(format[i] == 'u' || format[i] == 'x' || format[i] == 'X' )
                num = va_arg(ap, unsigned int);
                i++;
                count += ft_strlen();
            else if(format[i] == '%')
                ft_putchar(va_arg(ap, char *))
                    i++;
                count += ft_strlen();
        }
        else
        {
            ft_putchar(format[i]);
            i++;
            count++;
        }
    }
    va_end(ap);
    return(count);
}

int main()
{
    ft_printf("merhaba %s, yil %d\n", "Istanbul", 2025);

}