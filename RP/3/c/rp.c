#include <stdio.h>

int main(){
    int n  = 1;
    int x = 3;
    while (n<50){
        printf("%d\n", n);
        n = n + x;
        x = x + 2;
    }
}
