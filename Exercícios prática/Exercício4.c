#include <stdio.h>
#include <math.h>

/* Exercício 4 - Retângulo completo
Leia base e altura. Mostre:

Área
Perímetro
Diagonal
*/
int main()
{
    float base, altura, area, perimetro, diagonal;

    scanf("%f %f", &base, &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("AREA: %.2f\n", area);
    printf("PERIMETRO: %.2f\n", perimetro);
    printf("DIAGONAL: %.2f\n", diagonal);

    return 0;
}