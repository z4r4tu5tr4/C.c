#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){


	int a,b;

	int *pa,*pb;

	a = 30;
	b = 20;

	pa = &a;
	pb = &b;

	printf("Imprimindo o endereço do ponteiro %u\n",pa);
	/* Esses erros de portuga não pode ter não... Faltando um L na linha 20 é pecado */
	printf("Imprimindo o valor da variável %u\n",&a);
	printf("Imprimindo o valor da variável contida no ponteiro %u\n",*pa);

}
