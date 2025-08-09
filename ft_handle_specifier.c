/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 18:31:50 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/09 19:16:36 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(args));
	if (specifier == 's')
		return (print_str(args));
	if (specifier == 'd' || specifier == 'i')
		return (convert_int_to_str(args));
	if (specifier == 'x' || specifier == 'X')
		return (convert_hex_to_str(args, specifier));
	if (specifier == 'u')
		return (convert_unsigned_to_str(args));
	if (specifier == '%')
		return (print_percentage());
	if (specifier == 'p')
		return (convert_ptr_to_str(args));
	return (write(1, "%", 1));

}

