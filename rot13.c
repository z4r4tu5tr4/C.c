#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int opt = 0;
int x,y = 0;
char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char entrada [];

relacao(){
    for (x = 0; x < strlen(alfabeto)/2; x++){
        printf("%c <-> %c\n",alfabeto[x],alfabeto[x+13%26]);
    }
    menu();
}

cripto(int chave){
    printf("Digite a frase: \n");
    scanf("%s", &entrada);

    for (x = 0; x < strlen(entrada); x++){

      for(y = 0; y < strlen(alfabeto); y++){
          if(entrada[x] == alfabeto[y]){
            printf("%c",alfabeto[(y+13)%26]);
          }
        }
        y = 0;
      }
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
