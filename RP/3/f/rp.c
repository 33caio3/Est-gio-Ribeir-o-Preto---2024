#include <stdio.h>

    //2,10, 12, 16, 17, 18, 19, ____  
    //A seuqência é baseada se o número começa com a letra "d", logo será 200

int main (){
    int num = 200;
    if(num == 2 || num == 10 || num >=12 && num <= 20 || num >=200 && num <=299){
        printf("%d, correto", num);
    }else
        printf("Incorreto");
}
