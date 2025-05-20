// ESSE ALGORITMO COM IF ELSE TEM O MESMO OBJETIVO DO SWITCH CASE
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    printf("\nEscolha a opera��o:\n");
    printf("1 - Soma\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");
    printf("Op��o: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        resultado = num1 + num2;
        printf("Resultado da soma: %.2f\n", resultado);
    } else if (opcao == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtra��o: %.2f\n", resultado);
    } else if (opcao == 3) {
        resultado = num1 * num2;
        printf("Resultado da multiplica��o: %.2f\n", resultado);
    } else if (opcao == 4) {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divis�o: %.2f\n", resultado);
        } else {
            printf("Erro: divis�o por zero.\n");
        }
    } else {
        printf("Op��o inv�lida.\n");
    }

    return 0;
}
