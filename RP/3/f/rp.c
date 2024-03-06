#include <stdio.h>

int main (){
    int num = 200;
    if(num == 2 || num == 10 || num >=12 && num <= 20 || num >=200 && num <=299){
        printf("%d, correto", num);
    }else
        printf("Incorreto");
}
