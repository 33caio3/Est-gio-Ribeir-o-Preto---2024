#include <stdio.h>
#include <math.h>

    //4, 16, 36, 64, ____  
    //A sequência é baseada no quadrado dos numeros pares, logo será 100

int main(){
    int n = 2;
    while(n%2==0 && n<=12){
        printf("%d\n", n*n);
        n+=2;
    }
}
