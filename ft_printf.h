/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:23:48 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/17 17:42:21 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_print_char(va_list args);
int	ft_parse(const char *str, va_list args);
int	ft_handle_specifier(char specifier, va_list args);
int	ft_print_nbr(va_list args);
int	ft_print_str(va_list args);
int	ft_convert_hex(va_list args, char specifier);
int	ft_print_unsigned(va_list args);
int	ft_print_ptr(va_list args);

#endif