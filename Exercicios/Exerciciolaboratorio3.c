#include <stdio.h>

/*
 Função: calcularMedia
 Objetivo: calcular média ponderada das 5 notas
*/
float calcularMedia(float n[]) {
    float pesos[] = {1,2,3,4,5};
    float soma = 0;

    // Laço de repetição for
    for (int i = 0; i < 5; i++) {
        soma += n[i] * pesos[i];
    }

    return soma / 15;
}

/*
 Função: situacao
 Objetivo: determinar a situação do aluno
*/
int situacao(float media) {
    if (media >= 8) {
        return 1; // Aprovado com distinção
    } else if (media >= 6) {
        return 2; // Aprovado
    } else if (media >= 4) {
        return 3; // Recuperação
    } else {
        return 4; // Reprovado
    }
}

/*
 Função: destaque
 Objetivo: verificar se aluno atende critérios de destaque
*/
int destaque(float n[], float media) {
    float min[] = {5,5,6,6,7};

    // Só pode ter destaque se média >= 6
    if (media < 6) {
        return 0;
    }

    // Verifica se todas as notas atingem o mínimo
    for (int i = 0; i < 5; i++) {
        if (n[i] < min[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    float notas[5];
    float media;
    float somaMedias = 0;

    int distincoes = 0;
    int alunos = 0;
    int continuar = 1;

    // Laço de repetição for para contar até 8 alunos
    for (int i = 1; i <= 8 && continuar == 1; i++) {

        printf("Aluno %d\n", i);

        // Faz a leitura das 5 notas
        for (int j = 0; j < 5; j++) {
            scanf("%f", &notas[j]);

            // Encerra o programa, caso a primeira nota for -1
            if (j == 0 && notas[j] == -1) {
                continuar = 0;
            }
        }

        // Verificação de condição
        if (continuar == 1) {

            media = calcularMedia(notas);
            somaMedias += media;
            alunos++;

            int sit = situacao(media);

            // Conta distinções
            if (sit == 1) {
                distincoes++;
            }

            printf("Media: %.2f\n", media);

            // Verifica destaque
            if (destaque(notas, media)) {
                if (media >= 9) {
                    printf("Destaque com Honra\n");
                } else {
                    printf("Destaque\n");
                }
            }

            printf("\n");
        }
    }

    // Faz o cálculo da media geral da turma
    if (alunos > 0) {
        printf("Media geral: %.2f\n", somaMedias / alunos);
    }

    // Imprime o total de alunos com distinção
    printf("Aprovados com Distincao: %d\n", distincoes);

    // Fim do programa
    return 0;
}
