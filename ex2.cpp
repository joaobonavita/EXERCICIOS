#include <iostream>
int main() {
  float receita, despesa, saldo;

printf("Digite o valor da receita: ");
scanf("%f", &receita);

printf("Digite o valor da despesa");
scanf("%f", &despesa);

saldo = receita - despesa;

printf("Saldo final: %.2f\n", saldo);

return 0;
}
