#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração de variáveis de diferentes tipos
    char caractere = 'A';
    int inteiro = 10;
    float flutuante = 3.14;
    double duplo = 3.14159265359;
    short curto = 32767;
    long longo = 2147483647;
    long long muito_longo = 9223372036854775807;
    unsigned int sem_sinal = 4000000000;

    // Exibição dos valores e tamanhos das variáveis
    printf("Tipos de variáveis em C:\n\n");
    printf("char: %c, Tamanho: %lu bytes\n", caractere, sizeof(caractere));
    printf("int: %d, Tamanho: %lu bytes\n", inteiro, sizeof(inteiro));
    printf("float: %f, Tamanho: %lu bytes\n", flutuante, sizeof(flutuante));
    printf("double: %lf, Tamanho: %lu bytes\n", duplo, sizeof(duplo));
    printf("short: %d, Tamanho: %lu bytes\n", curto, sizeof(curto));
    printf("long: %ld, Tamanho: %lu bytes\n", longo, sizeof(longo));
    printf("long long: %lld, Tamanho: %lu bytes\n", muito_longo, sizeof(muito_longo));
    printf("unsigned int: %u, Tamanho: %lu bytes\n", sem_sinal, sizeof(sem_sinal));

    return 0;
}
