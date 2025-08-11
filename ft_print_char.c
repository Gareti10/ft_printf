#include "ft_printf.h"

int	ft_print_char(va_list args)
{
	return (ft_putchar((char)va_arg(args, int)));
}