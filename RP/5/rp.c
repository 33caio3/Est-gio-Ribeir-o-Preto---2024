#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //Escreva um programa que inverta os caracteres de um string. 

void inv(char str[]){
    int i,let,ult,tam= strlen(str);

    ult = tam - 1;
    for(i = 0; i<tam/2; i++){
        let = str[i];
        str[i] = str[ult];
        str[ult] = let;
        ult--;
    }
}
int main(){
    char nome[10] = {"caio"};
    printf("%s\n", nome);
    inv(nome);
    printf("%s\n", nome);
    return 0;
}
