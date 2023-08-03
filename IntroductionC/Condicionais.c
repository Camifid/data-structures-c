#include <stdio.h>

int main(void) {

	int a;
	
    printf("Digite um número: ");
	scanf("%d", &a);

	if (a > 0){
		printf("\nA variável 'a' é maior que 0.\n\n");	
	}
	else {
		printf("\nA variável 'a' é menor que 0.\n\n");
	}
	
  return 0;
}
