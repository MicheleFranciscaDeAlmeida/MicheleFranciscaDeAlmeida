#include <stdio.h>

/*
Exercício 3 – Par ou Ímpar

Leia um número inteiro e mostre:

PAR

ou

IMPAR
*/

int main()
{
    int numero;

    // Leitura do número inteiro
    scanf("%d", &numero);

    // Verificação se o número é par ou ímpar
    if (numero % 2 == 0)
    {
        printf("PAR\n");
    }
    else
    {
        printf("IMPAR\n");
    }

    return 0;
}