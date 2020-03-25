//gcc -o Lab9_1.exe Lab9_1.c
//./Lab9_1.exe
/**
 * Functions getchar() and puts
 * 
 *  getchar() function can be used to read characters from the standard input into a character array,
 *  and puts function can be used to display the characters as a string.
 *  getchar() reads a character from the standard input and returns the character as an integer.
 *  puts function takes a string as an argument and displays the string followed by a newline character.
 **/

#include <stdio.h>

const int size = 5;

void addRows(int a[size][size]) {
    int rowSum;
    printf("Row totals: ");
    for (int k = 0; k < 5; k++) {
        rowSum = 0;
        for (int l = 0; l < 5; l++) {
            rowSum += a[k][l];
        }
        printf("%d ",rowSum);
    }
    printf("\n");
}

void addCols(int b[size][size]) {
    int colSum;
    printf("Column totals: ");
    for (int m = 0; m < 5; m++) {
        colSum = 0;
        for (int n = 0; n < 5; n++) {
            colSum += b[n][m];
        }
        printf("%d ",colSum);
    }
    printf("\n");
}

int main(void) {
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d:", i+1);
        scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
    }
    addRows(arr);
    addCols(arr);

    return 0;
}