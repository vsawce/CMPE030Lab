#include <stdio.h>

int * rng() {
    static int adrArr[4];

    for (int i = 0; i < 4; i++)
        adrArr[i] = rand();

    printf("First random number: %d\n", adrArr[0]);

    return adrArr;
}

int main() {
    int *adrPtr; //ptr var
    adrPtr = rng(); /*assigns pointer to first 
                    element of the int array 
                    that rng() returns */

    for (int j = 0; j < 4; j++)
        printf("Val: %d\n", *adrPtr++); /* prints value at 
                                        the pointer */

    return 0;
}