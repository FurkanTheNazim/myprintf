#include <stdarg.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int num;
    int i;

    i = 0;
    while (format[i])
    {
        if(format[i] == '%')
        {   
            i++;
            if(format[i] == 'c')
                num = va_arg(ap, int);
                i++
            if(format[i] == 's')
                num = va_arg(ap, char *);
                i++;
            if(format[i] == 'p')
                num = va_arg(ap, void *);
                i++;
            if(format[i] == 'd' || format[i] == 'i')
                num = va_arg(ap, int);
                i++;
            if(format[i] == 'u' || format[i] == 'x' || format[i] == 'X' )
                num = va_arg(ap, unsigned int);
                i++
            if(format[i] == '%')
                num = va_arg(ap, int);
                i++;
        }
        else
        {
            ft_puthcar(format[i]);
            i++;
        }
    }
    va_end(ap);
    return(i);
}

int main()
{
    ft_printf("merhaba %s, yil %d\n", 42 "Istanbul", 2025);
}