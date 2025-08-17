/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:31:50 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/17 18:06:02 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(args));
	if (specifier == 'd' || specifier == 'i')
		return (ft_print_nbr(args));
	if (specifier == 's')
		return (ft_print_str(args));
	if (specifier == 'x' || specifier == 'X')
		return (ft_convert_hex(args, specifier));
	if (specifier == 'u')
		return (ft_print_unsigned(args));
	if (specifier == '%')
		return (write(1, "%", 1));
	if (specifier == 'p')
		return (ft_print_ptr(args));
	return (write(1, "%", 1));
}
