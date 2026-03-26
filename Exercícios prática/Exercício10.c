#include <stdio.h>

/*Exercício 4 – Média com situação

Leia duas notas (float), calcule a média e mostre:

MEDIA: ...
APROVADO

ou

MEDIA: ...
REPROVADO

Regra:

média ≥ 6 → APROVADO
média < 6 → REPROVADO

Atenção:

duas casas decimais
ordem da saída importa
tudo em maiúsculo
*/

int main()
{
    float nota1, nota2, media;

    // Ler a primeira nota do usuário
    scanf("%f", &nota1);

    // Ler a segunda nota do usuário
    scanf("%f", &nota2);

    // Calcular a média
    media = (nota1 + nota2) / 2;

    // Exibir a média com duas casas decimais
    printf("MEDIA: %.2f\n", media);

    // Verificar se o aluno está aprovado ou reprovado
    if (media >= 6.0)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }

    // Finalizar o programa
    return 0;
}