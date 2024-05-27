#include <stdio.h>

int main() {       // 0 1 2 3 4 5 6 7 8 9
  int numeros[10]; // - - - - - - - - - -
  int soma = 0;

  for(int i=0; i<10; i++) {
    printf("Entre com o %io numero: ", i);
    int deu_certo = scanf("%i", &numeros[i]);
    soma = soma + numeros[i];
  }

  float media = soma / 10.0f;
  printf("A media de ");
  for(int i=0; i<10; i++) {
    printf("%i + ", numeros[i]);
  }
  printf("= %.1f\n", media);
  
  return 0;
}