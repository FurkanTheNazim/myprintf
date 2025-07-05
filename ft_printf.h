#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int print_char(va_list ap);
int print_string(va_list ap);
int print_decimal(va_list ap);
int print_hex(va_list ap, char specifier);
int print_pointer(va_list ap);
int print_unsigned(va_list ap);
int print_percent(void);
int ft_numlen(long n);
int ft_hexlen(unsigned long n);
int ft_printf(const char *format, ...);
int ft_format_handler(char specifier, va_list ap);
#endif