#include <stdio.h>

int main() {

    char char_var[5];
    int int_var[5];

    for (int i = 0; i < 5; i++)
        printf("%p ", &char_var[i]);

    printf("\n");

    for (int j = 0; j < 5; j++)
        printf("%p ", &int_var[j]);

    printf("\n");

    return 0;
}