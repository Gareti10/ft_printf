/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gareti <gareti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:30:40 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/10 21:45:07 by gareti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *str, va_list args)
{
	int	i;
	int	count;
	int	printed;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			printed = ft_handle_specifier(str[i], args);
			if (printed == -1)
				return (-1);
			count += printed;
		}
		else
		{
			if (write(1, &str[i], 1) == -1)
				return (-1);
			count++;
		}
		i++;
	}
	return (count);
}
