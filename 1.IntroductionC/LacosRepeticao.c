#include <stdio.h>

int main() {

  printf("\nLaço WHILE\n");
  int a = 0;
  while (a < 5) {
    printf("Variável 'a' é: %d\n", a);
    a++;
  }

  printf("\nLaço FOR\n");
  for (int i = 0; i < 4; i += 2) {
    printf("Variável 'i' é: %d\n", i);
  }

  return 0;
}
