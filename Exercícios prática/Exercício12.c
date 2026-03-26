#include <stdio.h>

/* Exercício 6 – Múltiplos

Leia dois números inteiros A e B e diga se eles são múltiplos entre si.

Saída:

MULTIPLOS

ou

NAO MULTIPLOS

💡 Dica:
Use % (resto da divisão)
*/

int main()
{

    // Declaração de variáveis
    int A, B;

    // Entrada de dados e leitura dos valores
    scanf("%d %d", &A, &B);

    // Verificação se A é múltiplo de B ou vice-versa
    if (A % B == 0 || B % A == 0)
    {
        printf("MULTIPLOS\n");
    }
    else
    {
        printf("NAO MULTIPLOS\n");
    }

    // Retorno da função principal
    return 0;
}