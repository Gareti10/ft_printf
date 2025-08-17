#include "ft_printf.h"

static int	ft_put_unsigned(unsigned int n)
{
	char	buffer[10];
	int		i;
	int		count;

	if (n == 0)
		return (write(1, "0", 1));

	i = 0;
	count = 0;
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i--)	
		count += write(1, &buffer[i], 1);
	return (count);
}

int	ft_print_unsigned(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_put_unsigned(num));
}
