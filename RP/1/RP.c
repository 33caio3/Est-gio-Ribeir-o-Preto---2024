#include <stdio.h>
        //valor será 91
int main(){
    int indice = 13;
    int soma= 0;
    int k = 0;

    while(k<indice){
        k = k + 1;
        soma = soma + k;
    }
    printf("%d", soma);
}
