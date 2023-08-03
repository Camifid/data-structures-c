#include <stdio.h>

struct pessoa 
{	
	int idade;
	float altura;
	
};

	typedef struct pessoa Pessoa; //renomear struct pessoa para pessoa.
	
int main() {

	Pessoa p;
	p.idade = 5;
	p.altura = 1.65;

	printf("\nA idade da pessoa é %d\n", p.idade);
    printf("A altura da pessoa é: %.2f\n", p.altura);
	
  return 0;
}
