/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:23:43 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/09 14:29:23 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	if (!format)
		return (-1);
	printed = 0;
	va_start(args, format);
	printed += parse_format(format, args);
	va_end(args);
	return (printed);
}
