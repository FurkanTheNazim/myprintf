#include "ft_printf.h"
char ft_putchar(char c)
{
    write(1, &c, 1);
}
size_t ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while(s[len])
        len++;
    return (len);

}
void ft_putstr(char *s)
{
    write(1, &s, ft_strlen(s));
}

void	ft_putnbr(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}