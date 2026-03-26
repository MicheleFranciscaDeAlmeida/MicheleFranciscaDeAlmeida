#include <stdio.h>

/* Exercício 8 – Intervalos múltiplos

Leia um número real e informe em qual intervalo ele está:

[0,25]
(25,50]
(50,75]
(75,100]

ou

FORA DE INTERVALO

Exemplo de saída:

INTERVALO (25,50]
*/

int main()
{
    float numero;

    // Lê o número real do usuário
    scanf("%f", &numero);

    // Verifica em qual intervalo o número se encaixa
    if (numero >= 0 && numero <= 25)
    {
        printf("INTERVALO [0,25]\n");
    }
    else if (numero > 25 && numero <= 50)
    {
        printf("INTERVALO (25,50]\n");
    }
    else if (numero > 50 && numero <= 75)
    {
        printf("INTERVALO (50,75]\n");
    }
    else if (numero > 75 && numero <= 100)
    {
        printf("INTERVALO (75,100]\n");
    }
    else
    {
        printf("FORA DE INTERVALO\n");
    }

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}