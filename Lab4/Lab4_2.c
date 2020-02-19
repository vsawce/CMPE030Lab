#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8, firstSum, secondSum, totalSum;
    
    printf("Input ID number so I can steal your dining dollars: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
    firstSum = n1+n3+n5+n7;
    secondSum = n2+n4+n6+n8;
    firstSum *= 3;
    totalSum = firstSum + secondSum;
    totalSum -= 1;
    totalSum %= 10;
    totalSum = 9 - totalSum;
    printf("First sum: %d\nSecond sum: %d\nTotal: %d\n", firstSum, secondSum, totalSum);


}