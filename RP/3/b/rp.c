#include <stdio.h>

    // 2, 4, 8, 16, 32, 64, ____  
    //A sequência é baseada na multiplicação por 2, logo será 128

int main(){
    int a = 2;
    while(a<70){
        printf("%d\n",a=a*2);
    }
}
