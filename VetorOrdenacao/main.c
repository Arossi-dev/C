#include <stdio.h>
#include <stdlib.h>


void mostrarVetorOrdenado(int xxx[], int yyy) {
    printf("\nVetor ordenado em ordem crescente:\n");
    for (int i = 0; i < yyy; i++) {
        printf("vetor[%d] = %d\n", i, xxx[i]);
    }
}

void imprimeValorDesejado(int a, int b, int c){
    printf("\nValor 1 -> %d\n", a);
    printf("Valor 2 -> %d\n", b);
    printf("Valor 3 -> %d\n", c);
}

void somaDoisNumeros( int x, int y){
    printf("\nSoma %d com %d = %d\n", x, y, x+y);
}

int main()
{
    // Declarar e preencher vetor com 5 inteiros
    int vetor[5] = {12, 5, 20, 8, 15};

    printf("Valores do vetor:\n");
    // Acessar valores do vetor com índice
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Encontrar o maior valor do vetor
    int maior = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("\nMaior valor do vetor: %d\n", maior);

    printf("\n");

    // Inserir os valores com scanf
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenar o vetor (Bubble Sort)
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os valores
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetor[i] < vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }


    // Mostrar vetor ordenado
    mostrarVetorOrdenado(vetor, 5);

    imprimeValorDesejado(5, 10, 9);

    somaDoisNumeros(25,59);

    return 0;
}
