/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gareti <gareti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:23:48 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/10 22:23:52 by gareti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_print_char(va_list args);
int	ft_parse(const char *str, va_list args);
int	ft_handle_specifier(char specifier, va_list args);
int	ft_print_nbr(va_list args);
int	ft_print_str(va_list args);