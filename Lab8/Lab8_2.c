//gcc -o Lab8_2.exe Lab8_2.c
//./Lab8_2.exe

#include <stdio.h>

int main(void) {
    const int DIGIT_ARR_SIZE = 10; //10 digits
    int counter = 0; //for user input array index in while loop
    int digitArr[DIGIT_ARR_SIZE]; //store occurences of digits 0-9, set all to 0
    int inputArr[1000]; //user input stored here

    /* This loop is necessary because digitArr is not properly filling with zeros at
    initialization and is instead filling with big random numbers */
    for (int init = 0; init < DIGIT_ARR_SIZE; init++) digitArr[init] = 0;

    while (1) { //ask for input
        printf("Enter a number (0 to terminate): ");
        scanf("%d", &inputArr[counter]);
        if (inputArr[counter] == 0) break;
        counter++;
    }
    for (int j = 0; j < counter; j++) {
        int k = inputArr[j]; //assign temp var k to each inputted number
        while (k != 0) { //filter
            digitArr[(k % 10)]++;
            k = k/10;
        }
    }

    printf("Digit:        ");
    for (int l = 0; l < DIGIT_ARR_SIZE; l++) { //print each 0-9 digit
        printf("%d ", l);
    }
    printf("\nOccurences:   ");
    for (int m = 0; m < DIGIT_ARR_SIZE; m++) { //print occurences
        printf("%d ", digitArr[m]);
    }
    printf("\n");

    return 0;
}