#include <stdio.h>

int main() {
    // Preço médio das ações
    float preco_acao1 = 24.13;
    float preco_acao2 = 11.00;
    float preco_acao3 = 38.65;

    // Dividendos por ação no ano
    float dividendo_acao1 = 17.00;
    float dividendo_acao2 = 35.00;
    float dividendo_acao3 = 25.00;

    // Montante disponível para investir
    float montante_total = 1000.00;

    // Quantidade que podemos comprar de cada ação
    int qtd_acao1 = montante_total / preco_acao1;
    int qtd_acao2 = montante_total / preco_acao2;
    int qtd_acao3 = montante_total / preco_acao3;

    // Cálculo do Dividend Yield para cada ação
    float dy_acao1 = (dividendo_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendo_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendo_acao3 / preco_acao3) * 100;

    // Mostrar resultados
    printf("Você pode comprar %d ações da Ação 1.\n", qtd_acao1);
    printf("Você pode comprar %d ações da Ação 2.\n", qtd_acao2);
    printf("Você pode comprar %d ações da Ação 3.\n", qtd_acao3);

    printf("Dividend Yield da Ação 1: %.2f%%\n", dy_acao1);
    printf("Dividend Yield da Ação 2: %.2f%%\n", dy_acao2);
    printf("Dividend Yield da Ação 3: %.2f%%\n", dy_acao3);

    return 0;
}
