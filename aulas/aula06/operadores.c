#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;
  const double PI = 3.14;

  printf("Entre com o valor do numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numero2: ");
  deu_certo = scanf("%i", &numero2);

  int resultado = numero1 + numero2;
  printf("A soma dos numeros eh %i\n", resultado);

  resultado = numero1 - numero2;
  printf("A subtração dos numeros eh %i\n", resultado);

  resultado = numero1 * numero2;
  printf("A multiplicação dos numeros eh %i\n", resultado);

  resultado = numero1 / numero2;
  printf("A divisão dos numeros eh %i\n", resultado);

  float resultado2 = numero1 / (numero2 * 1.0); // conversao implicita
  printf("A divisão dos numeros eh %.1f\n", resultado2);

  resultado = numero1 % numero2;
  printf("O resto da divisão dos numeros eh %i\n", resultado);

//  numero1 = numero1 + 1;
//  numero1++;
//  ++numero1;

  printf("O incremento do numero1 eh %i\n", numero1++);
  printf("O incremento do numero1 eh %i\n", ++numero1);

// numero1 = numero1 - 1;
// numero1--;
// --numero1;  

  printf("O decremento do numero1 eh %i\n", numero1--);
  printf("O decremento do numero1 eh %i\n", --numero1);

  double raiz = sqrt(numero1);
  printf("A raiz quadrada no numero1 eh %.2f\n", raiz);
  
  double potencia = pow(numero1, 3); // numero1^3
  printf("A 3a potencia do numero1 eh %.2f\n", potencia);

  double logaritmo_base2 = log2(numero1);
  printf("O log2 do numero1 eh %.2f\n", logaritmo_base2);

  double seno = sin(numero1 * (PI / 180));
  printf("O seno do numero1 eh %.2f\n", seno);

  return 0;
}