#include <stdio.h>

/* Exercício 3 – Consumo de combustível

Leia a distância percorrida (km) e o combustível gasto (litros).
Calcule o consumo médio.

Saída:

CONSUMO: ... km/l
*/

int main()
{ // Início da função principal

    // Variáveis para armazenar a distância, o combustível e o consumo
    float distancia, combustivel, consumo;

    // Lê a distância percorrida do usuário
    scanf("%f", &distancia);
   

    // Lê o combustível gasto do usuário
    scanf("%f", &combustivel);

    // Calcula o consumo médio
    consumo = distancia / combustivel;

    // Exibe o consumo médio formatado com duas casas decimais
    printf("CONSUMO: %.2f km/l\n", consumo);

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}