#include <stdio.h>

    //1, 1, 2, 3, 5, 8, ____  
    //A sequência é baseada na soma do elemento anterior, logo será 13
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
