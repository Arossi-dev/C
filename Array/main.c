#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

// Função para encontrar o maior valor
int encontrarMaior(int *vetor, int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// Função para ordenar o vetor (bubble sort)
void ordenar(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Função para imprimir vetor
void imprimirVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL)); // Inicializa a semente do rand

    int vetor1[TAM] = {1,5, 2, 3, 4};
    imprimirVetor(vetor1, TAM);

    int vetor2[TAM];
    printf("\nDigite %d valores para o vetor2:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    printf("\nVetor2 digitado: ");
    imprimirVetor(vetor2, TAM);

    int maior = encontrarMaior(vetor2, TAM);
    printf("Maior valor do vetor2: %d\n", maior);

    ordenar(vetor2, TAM);
    printf("Vetor2 ordenado: ");
    imprimirVetor(vetor2, TAM);

    return 0;
}
