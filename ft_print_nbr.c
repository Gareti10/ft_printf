#include "ft_printf.h"

static int	ft_putnbr_recursive(long nb)
{
	int		count;

	count = 0;

	if (nb >= 10)
		count = count + ft_putnbr_recursive(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_print_nbr(va_list args)
{
	int		n;
	long	nb;
	int		count;

	
	n = va_arg(args, int);
	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	count += ft_putnbr_recursive(nb);
	return (count);
}
