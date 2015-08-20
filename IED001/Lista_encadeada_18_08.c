#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct no{

    int codigo;
    char nome[20];
    struct no *next;
} no;

struct no *corrente, *inicio, *auxiliar;

void enterdata(){

    system("clear");

    printf("Digite o codigo: ");
    scanf("%i", &auxiliar->codigo);

    printf("Digite o nome: ");
    scanf("%s", &auxiliar->nome);
}

void insere(no **Lista){

    if (inicio == NULL){

        corrente = (no*)malloc(sizeof(no));

        inicio = corrente;
        auxiliar = corrente;
        corrente->next = NULL;

        enterdata();
    }
    else{

        corrente = (no*)malloc(sizeof(no));

        corrente->next = NULL;
        auxiliar->next = corrente;
        auxiliar = corrente;

        enterdata();
    }
}

void menu(){

    int opt = 0;

    do{
        
        //system("clear");

        printf("=== MENU ====");
        printf("\n\n");
        printf("1. Inserir\n");
        printf("2. Imprimir\n");
        printf("3. Pesquisar\n");
        printf("4. Sair");
        printf("\n\n");
        printf("Opcao: ");

        scanf("%i", &opt);

        switch(opt){

        case 1:
            insere(&inicio);
            break;
        case 2:
            exibir(&inicio);
            break;
        case 3:
            pesquisar(&inicio);
            break;
        default:
            exit(0);
            break;
        }
    }
    while(opt < 4);
}

void exibir(no **Lista){

    system("clear");

    if (inicio == NULL){

        printf("Lista vazia\n\n");
    }
    else{
        
        auxiliar = inicio;

        printf("==== Resultados ====\n\n");

        while(auxiliar != NULL){

            printf("Codigo: %i\n", auxiliar->codigo);
            printf("Nome: %s\n\n", auxiliar->nome);

            auxiliar = auxiliar->next;
        }
    }

    getchar();
}

void pesquisar(no **Lista){
    system("clear");

    if (inicio == NULL){

        printf("Lista vazia\n\n");
    }
    else{

        int cod = 0, res = 0;

        auxiliar = inicio;

        printf("==== Pesquisa ====\n\n");

        printf("Digite o codigo desejado: ");
        scanf("%i", &cod);

        while(auxiliar != NULL && res == 0){

            if (auxiliar->codigo == cod){

                res = 1;
            }
            else{

                auxiliar = auxiliar->next;
            }
        }

        if (res){

            printf("Nome: %s\n\n", auxiliar->nome);
        }
        else{

            printf("Nada encontrado!\n\n");
        }
    }
    getchar();
}

void main(){

    inicio = NULL;
    auxiliar = NULL;
    corrente = NULL;

    setlocale(LC_ALL, "Portuguese");
    system("clear");
    
    menu();
}
