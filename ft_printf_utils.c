int ft_print_char(va_list ap)
{
    ft_putchar_fd(va_arg(ap, int), 1);
    return (1);
}

int ft_print_str(va_list ap)
{
    char *str = va_arg(ap, char *);
    if(!str)
    {
        str = "(null)";
    }
    ft_putstr_fd(str, 1)
    return (ft_strlen(str));
}

int ft_print_decimal(va_list ap)
{
    int num;

    num = va_arg(ap, int);
    ft_putnbr_fd(num, 1);
    return(ft_numlen(num));
}

int ft_print_hex(va_list ap, char specifier)
{
    unsigned int num;

    num = va_arg(ap, unsigned int);
    ft_puthex_fd(num, specifier);
    return (ft_hexlen(num));
}
int ft_print_pointer(va_list ap)
{
    unsigned long p;
    
    p = va_arg(ap, unsigned long);
    ft_putstr_fd("0x", 1);
    ft_puthex_fd(p, 'x');
    return (ft_hexlen(p) + 2);
}

int ft_print_percent(void)
{
    ft_putchar_fd('%', 1);
    return (1);
}