#include <stdio.h>

int main()
{
    /*
    Ler três valores reais A, B e C, calcular area do triângulo retângulo que tem A por base e C por altura,
    calcular a área do círculo de raio C, calcular a área do trapézio que tem A e B por bases e C por altura.
    Apresentar os resultados com 3 casas decimais. Saída:
    Triangulo:
    Circulo:
    Trapezio:
    */
   
        float A, B, C, areatriangulo, areacirculo, areatrapezio;

        scanf("%f %f %f", &A, &B, &C);

        areatriangulo = (A * C) / 2;
        areacirculo = 3.14159 * C * C;
        areatrapezio = ((A + B) * C) / 2;

        printf("TRIANGULO: %.3f\n", areatriangulo);
        printf("CIRCULO: %.3f\n", areacirculo);
        printf("TRAPEZIO: %.3f\n", areatrapezio);

        return 0;
    }