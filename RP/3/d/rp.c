#include <stdio.h>
#include <math.h>

int main(){
    int n = 2;
    while(n%2==0 && n<=12){
        printf("%d\n", n*n);
        n+=2;
    }
}
