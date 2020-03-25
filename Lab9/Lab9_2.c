//gcc -o Lab9_2.exe Lab9_2.c
//./Lab9_2.exe
/**
 * Functions getchar() and puts
 * 
 *  getchar() function can be used to read characters from the standard input into a character array,
 *  and puts function can be used to display the characters as a string.
 *  getchar() reads a character from the standard input and returns the character as an integer.
 *  puts function takes a string as an argument and displays the string followed by a newline character.
 **/

#include <stdio.h>

const int size = 80;

int main(void) {
    char arr[size];
    int n; 
    printf("Enter message to be encrypted: ");
    scanf("%s", arr);
    printf("Enter shift amount: ");
    scanf("%d", &n);

    //Caesar cipher
    for (int i = 0; i < size; i++) {
        if (arr[i] > 96 && arr[i] < 123)
            arr[i] = ((arr[i]+n-97)%26) + 97;
        else if (arr[i] > 64 && arr[i] < 91)
            arr[i] = ((arr[i]+n-65)%26) + 65;
    }
    
    printf("%s\n", arr);

    return 0;
}