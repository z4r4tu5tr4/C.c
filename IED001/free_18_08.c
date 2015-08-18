#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct no{
	
	int idade;

} no;

struct no *p,*w;

void main (){

	p = NULL;
	w = NULL;

	p = (no*)malloc(sizeof(no));

	scanf("%i",&p->idade);

	w = p;

	p = (no*)malloc(sizeof(no));
	scanf("%i",&p->idade);

	w = p;

	w = (no*)malloc(sizeof(no));
	scanf("%i",&w->idade);

	free(p);

	p = w;

	w = NULL;

	printf("O conteúdo do endereço do ponteiro W e: %i\n", &w->idade);
	printf("O conteúdo do endereço do ponteiro P e: %i\n", p->idade);
}
