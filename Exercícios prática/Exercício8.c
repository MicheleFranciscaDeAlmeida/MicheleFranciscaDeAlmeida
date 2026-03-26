#include <stdio.h>

/*
Leia dois valores inteiros A e B e mostre:

MAIOR: ...
*/

int main()
{
    int A, B;

    // Lê os dois valores inteiros do usuário
    scanf("%d %d", &A, &B);

    // Verifica qual é o maior valor e exibe o resultado
    if (A > B)
    {
        printf("MAIOR: %d\n", A);
    }
    else
    {
        printf("MAIOR: %d\n", B);
    }

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}