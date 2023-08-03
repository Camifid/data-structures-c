#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite um número: ");
  scanf("%d", &a);

  printf("Digite um número: ");
  scanf("%d", &b);

  printf("Digite um número: ");
  scanf("%d", &c);

  // ! operador lógico não, vai inverter o valor
  // se fosse !(a==b) = verdadeiro passa p falso

  if (a == b && b == c) {
    printf("a, b, c tem valores iguais\n");
  } else {
    printf("a, b, c tem valores diferentes\n");
  }

  return 0;
}
