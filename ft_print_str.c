#include "ft_printf.h"

int	ft_print_str(va_list args)
{
	char	*str;
	int		i;
	int		count;

	i = 0;
	count = 0;
	str = (char *)va_arg(args, char *);
	if (!str)
		str = "(null)";
	while (str[i])
	{
		count += write(1, &str[i], 1);
		i++;
	}
	return (count);
}