#include <stdio.h>

// Início do programa
int main()
{
    // Declaração das variáveis para as bases e altura do trapézio
    float basemaior, basemenor, altura;

    // Leitura dos valores das bases e altura
    scanf("%f %f %f", &basemaior, &basemenor, &altura);

    // Cálculo da área do trapézio usando a fórmula: A = ((B + b) * h) / 2
    float area = ((basemaior + basemenor) * altura) / 2;

    // Impressão do resultado da área com duas casas decimais
    printf("Area: %.2f\n", area);

    // Fim do programa
    return 0;
}