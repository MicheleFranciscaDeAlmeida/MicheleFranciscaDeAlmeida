#include <stdio.h>

/* Exercício 7 – Intervalo

Leia um número real e informe:

DENTRO

ou

FORA

Regra:

Entre 0 e 100 (inclusive) → DENTRO
Fora disso → FORA

Dica:
Use:

>= e <=
*/

int main()
{
    float numero;

    // Ler um número real
    scanf("%f", &numero);

    // Verificar se o número está dentro ou fora do intervalo
    if (numero >= 0 && numero <= 100)
    {
        printf("DENTRO\n");
    }
    else
    {
        printf("FORA\n");
    }

    // Retornar 0 para indicar que o programa terminou com sucesso
    return 0;
}