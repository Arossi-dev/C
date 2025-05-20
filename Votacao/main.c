#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite o valor a idade: ");
    scanf("%d", &idade);

    if(idade < 16){
        printf("Não pode votar.");
    }else if ( (idade >= 16 && idade <18) || idade > 70){
        printf("Voto facultativo.");
    }else {
        printf("Voto obrigatorio.");
    }
    return 0;
}
