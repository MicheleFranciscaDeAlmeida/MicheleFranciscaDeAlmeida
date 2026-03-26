#include <stdio.h>

/* Exercício 5 - Salário
Leia o número de horas trabalhadas e o valor por hora.
Calcule e mostre o salário.

Saída:

SALARIO: ...
*/

// Início do programa
int main()
{

    // Declaração de variáveis
    float horastrabalhadas, valorporhora, salario;

    // Leitura dos dados de entrada
    scanf("%f %f", &horastrabalhadas, &valorporhora);

    // Cálculo do salário
    salario = horastrabalhadas * valorporhora;

    // Exibição do resultado formatado
    printf("SALARIO: %.2f\n", salario);

    // Fim do programa
    return 0;
}