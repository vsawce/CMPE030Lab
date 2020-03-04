//gcc -o Lab6_Ex4.exe Lab6_Ex4.c
//./Lab6_Ex4.exe
#include <stdio.h>

int main(void) {
    int d1, d2;
    int tens = 0;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &d1, &d2);
    
    //printf("%d %d\n", d1, d2);
    printf("\nYou entered the number ");
    switch (d1) {
        case 1: {tens = 1; break;}
        case 2: {printf("twenty"); break;}
        case 3: {printf("thirty"); break;}
        case 4: {printf("forty"); break;}
        case 5: {printf("fifty"); break;}
        case 6: {printf("sixty"); break;}
        case 7: {printf("seventy"); break;}
        case 8: {printf("eighty"); break;}
        case 9: {printf("ninety"); break;}
    }
    if (tens == 0) {
        switch (d2) {
            case 0: {printf("."); break;}
            case 1: {printf("-one."); break;}
            case 2: {printf("-two."); break;}
            case 3: {printf("-three."); break;}
            case 4: {printf("-four."); break;}
            case 5: {printf("-five."); break;}
            case 6: {printf("-six."); break;}
            case 7: {printf("-seven."); break;}
            case 8: {printf("-eight."); break;}
            case 9: {printf("-nine."); break;}
        }
    }
    else {
        switch (d2) {
            case 1: {printf("eleven."); break;}
            case 2: {printf("twelve."); break;}
            case 3: {printf("thirteen."); break;}
            case 4: {printf("fourteen."); break;}
            case 5: {printf("fifteen."); break;}
            case 6: {printf("sixteen."); break;}
            case 7: {printf("seventeen."); break;}
            case 8: {printf("eighteen."); break;}
            case 9: {printf("nineteen."); break;}
        }
    }
    printf("\n");

    return (0);
}
