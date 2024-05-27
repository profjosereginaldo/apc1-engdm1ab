#include <stdio.h>
#include <string.h>

int main() {     // 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0
  char nome[20]; // J o s e   R e g i n a l d o \0
  printf("Entre com seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome);
  printf("Olá %s!\n", nome);

  char mensagem[30];
  strcpy(mensagem, "Ola");
  printf("%s\n", mensagem);
  strcat(mensagem, " Mundo!");
  printf("%s\n", mensagem);
  int tamanho = strlen(mensagem);
  printf("O tamanho da string eh %i\n", tamanho);
  printf("As strings nome e mensagem sao iguais? %i\n", strcmp(nome, mensagem));

  return 0;
}