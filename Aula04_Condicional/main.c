#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota inválida.\n");
    } else {
        if (nota < 5) {
            printf("Reprovado.\n");
        } else {
            if (nota < 7) {
                printf("Recuperação.\n");
            } else {
                if (nota < 9) {
                    printf("Aprovado.\n");
                } else {
                    printf("Aprovado com mérito.\n");
                }
            }
        }
    }

    return 0;
}
