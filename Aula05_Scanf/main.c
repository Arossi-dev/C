#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int inteiro;
    float real;
    char caractere;
     // Lendo um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &inteiro);
    // Lendo um n�mero real
    printf("Digite um n�mero real: ");
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
