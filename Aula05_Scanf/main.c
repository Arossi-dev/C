#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int inteiro;
    float real;
    char caractere;
     // Lendo um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);
    // Lendo um número real
    printf("Digite um número real: ");
    scanf("%f", &real);
    // Limpando o buffer do teclado
    while (getchar() != '\n');
    // Lendo um caractere
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    // Exibindo os valores lidos
    printf("\nValores lidos:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
