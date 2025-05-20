#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    double soma, sub, mult, div;

    numero1 = 20;
    numero2 = 2;

    soma = numero1 + numero2;
    sub = numero1 - numero2;
    mult = numero1 * numero2;
    div = numero1 / numero2;

    printf("A soma eh: %.2f\n", soma);
    printf("A subtracao eh: %.2f\n", sub);
    printf("A multiplicacao eh: %.2f\n", mult);
    printf("A divisao eh: %.2f\n", div);

    return 0;
}

