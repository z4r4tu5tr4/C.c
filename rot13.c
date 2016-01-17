#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int opt = 0;
int x = 0;
char alfabeto_lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//char alfabeto_upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

relacao(){
    for (x = 0; x < 13; x++){
        printf("%c <-> %c\n",alfabeto[x],alfabeto[x+12%26]);
    }
    menu();
}

cripto(int chave){
    printf("Digite a frase: \n");
    getstr("")

}

menu(){
    printf("Digite a opção que deseja:\n\n\
    1. Criptografar\n\
    2. Decriptografar\n\
    3. Ver relação da cifra\n\
    \n\
    :");
    scanf("%d", &opt);
    
    if (opt == 3){
        relacao();
    }
    else{
    cripto(opt);
    }
}

main (){

    menu();

}
