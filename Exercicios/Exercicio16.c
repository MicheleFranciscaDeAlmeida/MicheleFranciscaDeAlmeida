#include <stdio.h>

/*
Exercício 10 – Aumento de salário

Leia o salário de uma pessoa e calcule o novo salário baseado em:

Até 1000 → 20%
1000 a 3000 → 15%
3000 a 8000 → 10%
Acima de 8000 → 5%
📤Saída:
NOVO SALARIO: ...
REAJUSTE: ...
PERCENTUAL: ... %
Esse aqui mistura:

várias condições
cálculo
mais de uma saída
*/

int main()
{
    float salario, novosalario, reajuste;
    int percentual;

    // Leitura do salário
    scanf("%f", &salario);

    // Cálculo do novo salário e reajuste
    if (salario <= 1000)
    {
        percentual = 20;
        reajuste = salario * percentual / 100;
        novosalario = salario + reajuste;
    }
    else if (salario <= 3000)
    {
        percentual = 15;
        reajuste = salario * percentual / 100;
        novosalario = salario + reajuste;
    }
    else if (salario <= 8000)
    {
        percentual = 10;
        reajuste = salario * percentual / 100;
        novosalario = salario + reajuste;
    }
    else
    {
        percentual = 5;
        reajuste = salario * percentual / 100;
        novosalario = salario + reajuste;
    }
    // Saída dos resultados
    printf("NOVO SALARIO: %.2f\n", novosalario);
    printf("REAJUSTE: %.2f\n", reajuste);
    printf("PERCENTUAL: %d %%\n", percentual);

    // Fim do programa
    return 0;
}