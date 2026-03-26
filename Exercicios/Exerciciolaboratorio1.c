#include <stdio.h>

// Função que calcula o valor base do consumo em GB
float calcularConsumo(float gb) {
    float total = 0;

    // Verifica faixa de consumo
    if (gb <= 5) {
        total = gb * 12;
    } else if (gb <= 15) {
        total = (5 * 12) + (gb - 5) * 8;
    } else {
        total = (5 * 12) + (10 * 8) + (gb - 15) * 5;
    }

    return total;
}

// Aplica acréscimo de 10% se passar de 20GB
float aplicarAcrescimo(float total, float gb) {
    if (gb > 20) {
        total *= 1.10;
    }
    return total;
}

// Aplica desconto de 20% se valor > 150
float aplicarDesconto(float total) {
    if (total > 150) {
        total *= 0.80;
    }
    return total;
}

// Início do programa
int main() {
    float gb = -1, total, arrecadado = 0;

    // Laço de repetição for para até 10 clientes
    for (int i = 1; i <= 10 && gb != 0; i++) {

        printf("Consumo do cliente %d: ", i);
        scanf("%f", &gb);

        // Se consumo for diferente de 0, faz o c�lculo
        if (gb != 0) {

            total = calcularConsumo(gb);
            total = aplicarAcrescimo(total, gb);
            total = aplicarDesconto(total);

            printf("Fatura: R$ %.2f\n\n", total);

            // Somatória do total arrecadado
            arrecadado += total;
        }
    }

    // Imprime o total final
    printf("Total arrecadado: R$ %.2f\n", arrecadado);

    // Fim do programa
    return 0;
}
