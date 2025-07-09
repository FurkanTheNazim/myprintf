#include "ft_printf.h"

void	ft_putunsigned_fd(unsigned int n, int fd)
{
	long	nb;

	nb = n;
	
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
