#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_TIME, "pt_BR.UTF-8");


    int a = 5, c = 3;
    float b = 2.5, d = 4.0;

    int somaInt = a + b;
    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao = a / b;
    float soma_mult = a + a * b;
    float parenteses = (a + a) * b;
    float mult_div = a * b / 2;
    float div_int_float = a / 2 * b;
    float soma_div_int_float = a / 2 + b;

    printf("Operações matemáticas com int e float:\n");
    printf("1. Soma: %d + %.2f = %d\n", a, b, somaInt);
    printf("1. Soma: %d + %.2f = %.2f\n", a, b, soma);
    printf("2. Subtração: %d - %.2f = %.2f\n", a, b, subtracao);
    printf("3. Multiplicação: %d * %.2f = %.2f\n", a, b, multiplicacao);
    printf("4. Divisão: %d / %.2f = %.2f\n", a, b, divisao);
    printf("5. Soma e Multiplicação: %d + %d * %.2f = %.2f\n", a, a, b, soma_mult);
    printf("6. Parênteses alterando precedência: (%d + %d) * %.2f = %.2f\n", a, a, b, parenteses);
    printf("7. Multiplicação e divisão: %d * %.2f / 2 = %.2f\n", a, b, mult_div);
    printf("8. Divisão inteira e float: %d / 2 * %.2f = %.2f\n", a, b, div_int_float);
    printf("9. Soma de divisão inteira e float: %d / 2 + %.2f = %.2f\n", a, b, soma_div_int_float);

    a = (2 + 3 ) * 4;

    printf("Calculo: %d\n", a);

    b = (1 - 4 ) / (2 - 5) ;

    printf("Calculo: %f\n", b);

    a = 2.75 + 1.05;

    printf("Calculo: %d\n", a);

    b = a / 2;

    printf("Calculo: %f\n", b);


    a = 5;
    c = 3;
    b = 2.5;
    d = 4;

    float exp1 = a + b * c - d / 2;
    float exp2 = (a + b) * (c - d) / 2;
    float exp3 = a * (b + c) / (d - 1);
    float exp4 = a / (b + c) * d - 1;

    printf("11. Expressão complexa 1: %d + %.2f * %d - %.2f / 2 = %.2f\n", a, b, c, d, exp1);
    printf("12. Expressão complexa 2: (%d + %.2f) * (%d - %.2f) / 2 = %.2f\n", a, b, c, d, exp2);
    printf("13. Expressão complexa 3: %d * (%.2f + %d) / (%.2f - 1) = %.2f\n", a, b, c, d, exp3);
    printf("14. Expressão complexa 4: %d / (%.2f + %d) * %.2f - 1 = %.2f\n", a, b, c, d, exp4);


    int x = 10;
    printf("Valor de x: %d\n", x);



    float e = 5, f = 2;
    float resultado = e / f; // Erro semântico: divisão inteira

    printf("Resultado: %.2f\n", resultado);


    return 0;
}
