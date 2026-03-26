#include <stdio.h>

/*
Exercício 9 – Lanche (clássico de prova)

Uma lanchonete possui o seguinte cardápio:

CÓDIGO   PRODUTO         PREÇO
1        Cachorro Quente 4.00
2        X-Salada        4.50
3        X-Bacon         5.00
4        Torrada simples 2.00
5        Refrigerante    1.50

Leia:

código do item
quantidade

E calcule o valor total a pagar.

Saída:
TOTAL: R$ ...
Regras
Use if / else if
Duas casas decimais
Exatamente esse formato:
TOTAL: R$ 10.00
Dica

Você vai fazer algo tipo:

if (codigo == 1) {
    total = quantidade * 4.00;
*/

int main()
{
    float preco;
    int codigo, quantidade;

    // Lê o código do item e a quantidade
    scanf("%d %d", &codigo, &quantidade);

    // Determina o preço com base no código
    if (codigo == 1)
    {
        preco = 4.00;
    }
    else if (codigo == 2)
    {
        preco = 4.50;
    }
    else if (codigo == 3)
    {
        preco = 5.00;
    }
    else if (codigo == 4)
    {
        preco = 2.00;
    }
    else if (codigo == 5)
    {
        preco = 1.50;
    }
    else
    {
        preco = 0.00; // Código inválido, preço é zero
    }

    // Calcula o total a pagar
    float total = quantidade * preco;

    // Imprime o total com duas casas decimais
    printf("TOTAL: R$ %.2f\n", total);

    // Retorna 0 para indicar que o programa terminou com sucesso

    return 0;
}