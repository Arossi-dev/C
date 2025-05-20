#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int resultado, count;
    int i = 1;

    for(i ; i<=10; i++){
        resultado = i * 2;
        printf("Valor de %d x 2 eh = %d\n", i, resultado);
      }

      printf("\n");

  	i = 0;
  	while(i < 10){
   		resultado = i;
   		printf("Valor pares %d\n", resultado);
  		i = i+2;
  	}

  	printf("\n");

    i = 1;
    do{
       resultado = i * 2;
       printf("Valor de %d x 2 eh = %d\n", i, resultado);
       i++;
    }while(i <= 10);

    printf("\n");

    int linha, coluna;
	count = 1;
	    for(linha = 1; linha <=3 ; linha++){
	        for(coluna = 1; coluna <=3 ; coluna++ ){
	            printf("%d ", count);
	            count++;
	        }
	       printf("\n");
    }

    printf("\n");

    for(linha = 1; linha <=3 ; linha++){
        for(coluna = 1; coluna <=3 ; coluna++ ){
            if(linha == coluna ){
                printf("** ");
            }else{
                printf("%d%d ", linha, coluna);
            }
        }
       printf("\n");
    }

    printf("\n");

    for(linha = 1; linha <=3 ; linha++){
        for(coluna = 1; coluna <=3 ; coluna++ ){
            if(linha + coluna == 4 ){
                printf("** ");
            }else{
                printf("%d%d ", linha, coluna);
            }
        }
       printf("\n");
    }

    return 0;
}
