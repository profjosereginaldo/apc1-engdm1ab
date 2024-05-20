#include <stdio.h>

int main() {
  int numero;
  int numero_eh_valido = 0;

  while (numero_eh_valido == 0) {
    printf("Entre com um numero entre 1 e 10:");
    int leu_certo = scanf("%i", &numero);

    numero_eh_valido = leu_certo && numero >=1 && numero <= 10;

    if (numero_eh_valido == 0) {
      printf("Algo de errado que naum ta certo!\n");
      getchar(); // limpar o buffer
    }
  }

  printf("Faz certo que da certo!\n");

  do {
    printf("Entre com um numero entre 1 e 10:");
    int leu_certo = scanf("%i", &numero);

    numero_eh_valido = leu_certo && numero >=1 && numero <= 10;

    if (numero_eh_valido == 0) {
      printf("Algo de errado que naum ta certo!\n");
      getchar(); // limpar o buffer
    }
  } while (numero_eh_valido == 0);

  printf("Faz certo que da certo!\n");

  return 0;
}