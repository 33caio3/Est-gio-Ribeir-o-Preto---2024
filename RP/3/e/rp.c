#include <stdio.h>

int main (){
    int x,y,z;
    x = 1;
    y = 1;
    z = x + y;
    while (z < 14){
        printf("%d\n", z);
        x = y;
        y = z;
        z = x + y;
    }
}
