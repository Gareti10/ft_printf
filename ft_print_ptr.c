/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:37:12 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/17 19:28:20 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(va_list args)
{
	void			*ptr;
	unsigned long	address;
	int				count;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long) ptr;
	count = write(1, "0x", 2);
	count += ft_print_hex(address, "0123456789abcdef");
	return (count);
}

static int	ft_print_hex(unsigned long num, const char *base)
{
	char	buffer[17];
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (num == 0)
		buffer[i++] = '0';
	while (num > 0)
	{
		buffer[i++] = base[num % 16];
		num /= 16;
	}
	while (i--)
		count += write(1, &buffer[i], 1);
	return (count);
}
