/*
4. Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.
*/
#include <stdio.h>
#include <string.h>

int main() {
  char frase[31];
  memset(frase, '\0', 31);

  printf("Entre com uma frase com até 30 caracters: ");
  int deu_certo = scanf("%[^\n]s", frase);

  int k = 0;
  char matriz[6][5];
  for(int i=0; i<6; i++) {
    for(int j=0; j<5; j++) {
      matriz[i][j] = frase[k++];
    }
  }

  printf("A frase codificada eh: ");
  for(int j=0; j<5; j++) {
    for(int i=0; i<6; i++) {
      printf("%c", matriz[i][j]);
    }
  }
  printf("\n");
  
  return 0;
}