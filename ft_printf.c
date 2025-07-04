#include <stdarg.h>
#include "ft_printf.h"
int ft_format_specifier(char specifier , va_list ap)
{
    int count;

    count = 0;
    if(specifier == 'c')
        ft_putchar(va_arg(ap, int));
        count = 1;
    else if(specifier == 's')
        if(!str)
            str = "\0";
        ft_putstr(str);
        count = ft_strlen(str);
    else if(specifier == 'd' || specifier == 'i')
        ft_putnbr(va_arg(ap, int));
        count += ft_strlen();
    else if(specifier == 'p')
        ft_putstr(va_arg(ap, void *));
        count += ft_strlen();
    else if(specifier == 'u' || specifier == 'x' || specifier == 'X' )
        num = va_arg(ap, unsigned int);
        count += ft_strlen();
    else if(specifier == '%')
        ft_putchar(va_arg(ap, char *))
        count += ft_strlen();
    return (count);
}
int ft_printf(const char *format, ...)
{
    va_list ap;
    int i;
    int count;
    
    va_start(ap, format);
    count = 0;
    i = 0;
    while (format[i])
    {
        if (format[i++] == '%')
        {
            count += ft_format_specifier(format[i], ap);
        }
        
        else
        {
            ft_putchar(format[i]);
            count++;
        }
        i++;
    }
    va_end(ap);
    return(count);
}

int main()
{
    ft_printf("merhaba 42 %s, %d\n", "Istanbul", 2025);
}