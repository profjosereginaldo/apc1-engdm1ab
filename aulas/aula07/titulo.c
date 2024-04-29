#include <stdio.h>

int main() {
  int idade;

  printf("Entre com a sua idade: ");
  int leu_certo = scanf("%i", &idade);

  if (leu_certo) {
    if (idade < 16) {
      printf("Ainda não pode votar!\n");
    } else if (idade >= 18 && idade <= 70) {
      printf("O voto é obrigatário.\n");
    } else {
      printf("O voto é opcional.\n");
    }
  } else {
    printf("Idade invalida. Tente novamente!\n");
  }

  return 0;
}