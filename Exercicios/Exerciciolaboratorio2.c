#include <stdio.h>

/*
 Função: calcularEnergia
 Objetivo: calcular valor base conforme faixas de consumo
*/
float calcularEnergia(float kwh) {
    float total = 0;

    if (kwh <= 100) {
        total = kwh * 0.50;
    } else if (kwh <= 300) {
        total = (100 * 0.50) + (kwh - 100) * 0.75;
    } else if (kwh <= 500) {
        total = (100 * 0.50) + (200 * 0.75) + (kwh - 300) * 1.20;
    } else {
        total = (100 * 0.50) + (200 * 0.75) + (200 * 1.20) + (kwh - 500) * 1.80;
    }

    return total;
}

/*
 Função: aplicarPonta
 Objetivo: aplicar acréscimo de 20% se for horário de ponta
*/
float aplicarPonta(float total, int ponta) {
    if (ponta == 1) {
        total *= 1.20;
    }
    return total;
}

/*
 Função: aplicarRegras
 Objetivo: aplicar taxa ou desconto conforme valor final
*/
float aplicarRegras(float total) {
    if (total > 700) {
        total *= 0.88; // desconto de 12%
    } else if (total > 400) {
        total *= 1.08; // taxa de 8%
    }
    return total;
}

// Início do programa
int main() {
    float kwh = -1;     // consumo
    float total;        // valor da fatura
    float maior = 0;    // maior fatura encontrada
    int ponta;          // indica horário de ponta

    // Loop para até 5 clientes ou parar se consumo = 0
    for (int i = 1; i <= 5 && kwh != 0; i++) {

        printf("O consumo do cliente eh %d: ", i);
        scanf("%f", &kwh);

        if (kwh != 0) {

            printf("Horario de ponta? (1=sim, 0=nao): ");
            scanf("%d", &ponta);

            // Cálculo da fatura
            total = calcularEnergia(kwh);
            total = aplicarPonta(total, ponta);
            total = aplicarRegras(total);

            printf("A fatura eh: R$ %.2f\n\n", total);

            // Verifica maior valor
            if (total > maior) {
                maior = total;
            }
        }
    }

    // Exibe maior fatura
    printf("A maior fatura foi de: R$ %.2f\n", maior);

    // Fim do programa
    return 0;
}
