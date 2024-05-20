#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = -1;

  while (opcao != 0) {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver pontuação\n");
    printf("3 - Ajuda\n");
    printf("0 - Sair\n");
    printf("Entre com uma opção => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpa o buffer

    switch (opcao) {
    case 1: {
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("Nome\tPontução\n");
      printf("Jose\t1000\n");
      printf("Maria\t500\n");
      printf("Pedro\t100\n");
      printf("Pressione ENTER p/ continuar...");
      getchar();
      break;
    }
    case 3: {
      break;
    }
    case 0:
      printf("Até logo!\n");
      break;
    default:
      printf("Opção Inválida! Pressione ENTER p/ continuar\n");
      getchar();
    }
  }

  return 0;
}