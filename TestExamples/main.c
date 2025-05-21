#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    float b = 3;
    float c = 4;
    float resultado;
    resultado = b*c/a;
    printf("resultado: %.2f\n", resultado);
    resultado = (b*c)/a;
    printf("resultado: %.2f\n", resultado);
    resultado = b+b/a;
    printf("resultado: %.2f\n", resultado);

    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 4; j++){
            printf(" (%02d,%02d) ", i, j);
            }
        printf("\n");
    }

    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 4; j++){
            if(i<j){
                printf(" ( *,* ) ");
            }else{
                printf(" (%02d,%02d) ", i, j);
            }
        }
        printf("\n");
    }

    int x = 0;
    do{
        printf("valor de X: %d", x);
        x = x + 2;
        printf("\n");
    }while(x < 6);

    x = 0;
    while(x < 6){
        printf("valor de X: %d", x);
        x = x + 2;
        printf("\n");
    }

    float nota = 6;
    float presenca = 60;
    if( nota >= 6 || presenca >=75){
        printf("ALUNO APROVADO");
    }else{
        printf("ALUNO REPROVADO");
    }

    printf("\n");
    int teste = 5;
    if(teste==1){
        printf("1 e verdade");
    }else if (teste == 2){
        printf("2 e verdade");
    }else if (teste != 3){
        printf("3 e verdade");
    }else if (teste == 4){
        printf("4 e verdade");
    }else {
        printf("não tem correspondencia");
    }

    return 0;
}
