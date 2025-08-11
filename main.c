/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gareti <gareti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:00:54 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/10 21:54:53 by gareti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    char c = 'Z';
    int ret1, ret2;

    ret1 = printf("%c", c);
    printf("\nRetorno printf: %d\n", ret1);

    ret2 = ft_printf("%c", c);
    ft_printf("\nRetorno ft_printf: %d\n", ret2);

    return 0;
}
