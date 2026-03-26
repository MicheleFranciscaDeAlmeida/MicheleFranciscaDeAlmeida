#include <stdio.h>

/* Exercício 1 – Positivo, Negativo ou Zero

Leia um número real e mostre:

POSITIVO

ou

NEGATIVO

ou

ZERO

⚠️ Sem mensagens extras, só a saída.
*/

int main()
{
    // Variável para armazenar o número real
    float numero;

    // Lê o número real do usuário
    scanf("%f", &numero);

    // Verifica se o número é positivo, negativo ou zero e exibe a mensagem correspondente
    if (numero > 0)
    {
        printf("POSITIVO\n");
    }
    else if (numero < 0)
    {
        printf("NEGATIVO\n");
    }
    else
    {
        printf("ZERO\n");
    }

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}