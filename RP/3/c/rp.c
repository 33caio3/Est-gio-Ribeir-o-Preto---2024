#include <stdio.h>

    // 0, 1, 4, 9, 16, 25, 36, ____  
    //A seuquência é baseada na soma de números ímpares, logo será 49

int main(){
    int n  = 1;
    int x = 3;
    while (n<50){
        printf("%d\n", n);
        n = n + x;
        x = x + 2;
    }
}
