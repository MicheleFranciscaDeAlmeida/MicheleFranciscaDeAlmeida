#include <stdio.h>

/* Exercício 5 – Maior de três números

Leia três valores inteiros e mostre:

MAIOR: ...

💡 Dica:
Use if / else if / else
(compare A, B e C)
*/

int main()
{

    // Declaração de variáveis
    int A, B, C;

    // Entrada de dados e leitura dos valores
    scanf("%d %d %d", &A, &B, &C);

    // Verificação do maior número
    if (A >= B && A >= C)
    {
        printf("MAIOR: %d\n", A);
    }
    else if (B >= A && B >= C)
    {
        printf("MAIOR: %d\n", B);
    }
    else
    {
        printf("MAIOR: %d\n", C);
    }

    // Retorno da função principal
    return 0;
}