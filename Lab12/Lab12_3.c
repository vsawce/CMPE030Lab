#include <stdio.h>
//#include <string.h>

int main() {
    //a
    union number {
        int x;
        double y;
    };

    //b
    union number varName;

    //c
    varName.x = 100;
    printf("%d\n", varName.x);
    printf("%f\n", varName.y);
    
    //d
    varName.y = 50.0;
    printf("\n%d\n", varName.x);
    printf("%f\n", varName.y);

    return 0;
}