#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret;

    printf("--- Teste %%u ---\n");

    ret = ft_printf("Meu ft_printf: %u\n", 42);
    printf("Retorno: %d\n", ret);

    ret = ft_printf("Meu ft_printf: %u\n", 0);
    printf("Retorno: %d\n", ret);

    ret = ft_printf("Meu ft_printf: %u\n", 4294967295u);
    printf("Retorno: %d\n", ret);

    printf("\n--- Comparando com printf original ---\n");

    printf("Original printf: %u\n", 42);
    printf("Original printf: %u\n", 0);
    printf("Original printf: %u\n", 4294967295u);

    return 0;
}
