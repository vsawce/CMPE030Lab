//gcc -o Lab8_1.exe Lab8_1.c
//./Lab8_1.exe
/**
 * sizeof(a) / sizeof(a[0]) returns size of array
 * 
 * if a is an array of 10 integers:
 * sizeof(a) is typically 40, assuming int is allocated 4 bytes
 * sizeof(a[0]) is 4 in this case, probably because of the bytes?
 **/

#include <stdio.h>

int main(void) {

    int fibArr[15] = {[0] = 0, [1] = 1};
    printf("%d\n%d\n", fibArr[0], fibArr[1]);
    for (int i = 2; i < (sizeof(fibArr)/sizeof(fibArr[0])); i++) {
        fibArr[i] = fibArr[i-1] + fibArr[i-2];
        printf("%d\n", fibArr[i]);
    }



    return 0;
}