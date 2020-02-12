//gcc -o Lab3.exe Lab3.c
//./Lab3.exe
#include <stdio.h>

char ch[9] = {'\'', '\"', '\?', '\\', '\a', '\b', '\n', '\r', '\t' }; 

int main(void)
{
    for (int i = 0; i < 9; i++) {
        printf("%c | ", ch[i]);
    }
    printf("\n");
}