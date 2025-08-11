/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gareti <gareti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:00:54 by rgareti-          #+#    #+#             */
/*   Updated: 2025/08/10 22:30:15 by gareti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdio.h>

int main(void)
{
    char *str1 = "Hello, world!";
    char *str2 = NULL;
    int ret1, ret2;

    // Teste com string normal - printf original
    ret1 = printf("Original printf: %s\n", str1);
    printf("Retorno original: %d\n", ret1);
    ret1 = ft_printf("Original printf: %s\n", str1);
    ft_printf("Retorno original: %d\n", ret1);
    // Teste com string normal - ft_printf
    ret2 = ft_printf("Meu ft_printf: %s\n", str1);
    ft_printf("Retorno ft_printf: %d\n", ret2);

    // Teste com string NULL - printf original
    ret1 = printf("Original printf NULL: %s\n", str2);
    printf("Retorno original: %d\n", ret1);

    // Teste com string NULL - ft_printf
    ret2 = ft_printf("Meu ft_printf NULL: %s\n", str2);
    ft_printf("Retorno ft_printf: %d\n", ret2);

    return 0;
}
