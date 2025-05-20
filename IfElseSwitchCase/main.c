// ESSE ALGORITMO COM IF ELSE TEM O MESMO OBJETIVO DO SWITCH CASE
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        resultado = num1 + num2;
        printf("Resultado da soma: %.2f\n", resultado);
    } else if (opcao == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtração: %.2f\n", resultado);
    } else if (opcao == 3) {
        resultado = num1 * num2;
        printf("Resultado da multiplicação: %.2f\n", resultado);
    } else if (opcao == 4) {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divisão: %.2f\n", resultado);
        } else {
            printf("Erro: divisão por zero.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
