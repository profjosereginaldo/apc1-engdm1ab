#include <stdio.h>

int main() {
  int avaliacao;

  printf("Entre com a avalidacao do motorista entre 1 a 5: ");
  int leu_certo = scanf("%i", &avaliacao);
/*
  if (avaliacao == 1) {
    printf("O motorista ganhou *\n");
  } else if (avaliacao == 2) {
    printf("O motorista ganhou **\n");
  } else if (avaliacao == 3) {
    printf("O motorista ganhou ***\n");
  } else if (avaliacao == 4) {
    printf("O motorista ganhou ****\n");
  } else if (avaliacao == 5) {
    printf("O motorista ganhou *****\n");
  } else {
    printf("Avaliacao invalida. Tente novamente!\n");
  }
*/

  switch(avaliacao) {
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
    default: printf("Avaliacao invalida. Tente novamente\n");
  }
  
  return 0;
}