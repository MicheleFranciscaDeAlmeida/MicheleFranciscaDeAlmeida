#include <stdio.h>

int main()
{

    float base, altura, area, perimetro;

    scanf("%f %f", &base, &altura);

    perimetro = 2 * (base + altura);

    area = base * altura;

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}