#include <stdio.h>

int main() {
  int numero;
  int qtde_multiplos = 0;
  
  printf("Entre com um numero > 0: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo && numero > 0) {
    for(int i = 1; i <= numero; i++)  {
      if (numero % i == 0) {
        qtde_multiplos++;
      }
    }
    if (qtde_multiplos == 2) {
      printf("O numero %i eh primo!\n", numero);
    } else {
      printf("O numero %i naum eh primo!\n", numero);
    }
  } else {
    printf("Numero invalido. Tente novamente\n");
  }
  
  return 0;
}