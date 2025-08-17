static int	ft_print_hex (unsigned int num, const char *base);

int	ft_convert_hex(va_list args, char specifier)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	if (specifier == 'x')
		return (ft_print_hex(num, "0123456789abcdef"));
	else
		return (ft_print_hex(num, "0123456789ABCDEF"));
}

static int	ft_print_hex (unsigned int num, const char *base)
{
	char 			buffer[16];
	unsigned int	count;
	int 			i;

	i = 0;
	count = 0;
	if (num == 0)
		return (write(1,"0",1));
	while (num > 0)
	{
		buffer[i++] = base[num % 16];
		num /= 16;
	}
	while (i--)
		count += write(1, &buffer[i],1);
	return (count);
}