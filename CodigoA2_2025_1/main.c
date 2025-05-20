#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    float z;

    printf("Questao 01: \n");
    y = 2 + 3 * 4;
    printf("valor de y: %d\n", y);

    z = (11 - 1) / (1 - 3);
    printf("valor de z: %f\n", z);

    y = 1.5 + 1;
    printf("valor de y: %d\n", y);

    z = z / y;
    printf("valor de z: %f\n", z);

    printf("*************************\n");
    printf("Questao 02: \n");
    printf("printf(\"valor de y: %%d\", y);\n");
    printf("printf(\"valor de z: %%f\", z);\n");

    printf("*************************\n");
    printf("Questao 03: \n");
    scanf("%d", &y);
    scanf("%f", &z);
    printf("valor de y: %d\n", y);
    printf("valor de z: %f\n", z);
    printf("scanf(\"%%d\", &y);\n");
    printf("scanf(\"%%f\", &z);\n");

    printf("*************************\n");
    printf("Questao 04: \n");
    int A = 5;
    int B = 2;

    printf("ALTERNATIVA A - A>=B\n");
    if(A>=B){
        printf("A>=B eh V\n");
    }else{
        printf("A>=B eh F\n");
    }

    printf("ALTERNATIVA B - A<B\n");
    if(A<B){
        printf("A<B eh V\n");
    }else{
        printf("A<B eh F\n");
    }

    printf("ALTERNATIVA C - A/B = 2 - NAO SE APLICA = É A ATRIBUIÇÃO\n");
   //if(A/B = 2){
   //     printf("A/B = 2 eh V\n");
   // }else{
   //     printf("A/B = 2 eh F\n");
   // }

    printf("ALTERNATIVA D - A/B == 2.5\n");
    if(A/B == 2.5){
        printf("A/B == 2.5 eh V\n");
    }else{
        printf("A/B == 2.5 eh F\n");
    }

    int divisao = A/B;
    float divisaoF = A/B;
    printf("divisao = %d\n", divisao);
    printf("divisaoF = %f\n", divisaoF);

    printf("ALTERNATIVA E - A>B\n");
    if(A>B){
        printf("A>B eh V\n");
    }else{
        printf("A>B eh F\n");
    }

    printf("*************************\n");
    printf("Questao 05: \n");

    int numero;
	//int 1valor;
	int Valor1;
	int _1mes;
    //int nota!;

    printf("*************************\n");
    printf("Questao 06: \n");
    printf("char, int, float e double\n\n");


    return 0;
}
