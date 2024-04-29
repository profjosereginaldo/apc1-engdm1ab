/*
3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
*/

#include <stdio.h>

int main() {
  int nota;

  printf("Entre com uma nota de 1 a 5: ");
  int leu_certo  = scanf("%i", &nota);

  switch(nota) {
    case 1:
    case 2: printf("Insuficiente\n"); break;
    case 3: 
    case 4: printf("Bom\n"); break;
    case 5: printf("Otimo\n"); break;
    default: printf("Nota invalida!\n");
  }
  
  return 0;
}