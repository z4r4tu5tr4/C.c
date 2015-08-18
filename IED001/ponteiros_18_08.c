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
	printf("Imprimindo o valor da variáve %u\n",&a);
	printf("Imprimindo o valor da variável contida no ponteiro %u\n",*pa);

}
