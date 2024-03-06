#include <stdio.h>

int main (){
    int x,y,z;
    x = 1;
    y = 1;
    z = x + y;
    int i = 34;
    while (z <= 34){
        printf("%d\n", z);
        x = y;
        y = z;
        z = x + y;
            if (i == z){
        printf("Esta presente ");
    }else{
        printf("Nao esta presente ");
    }
    }
}
