//gcc -o Lab6_2.exe Lab6_2.c
//./Lab6_2.exe
#include <stdio.h>

int main(void) {
    int m1,d1,y1,m2,d2,y2;
    printf("Enter first date on or after the year 2000 (mm/dd/yy): "); 
    scanf("%d/%d/%d", &m1, &d1, &y1); //record user input, date 1
    printf("\nEnter second date on or after the year 2000 (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);//record user input, date 2

    //printf("\nFirst date: %d/%d/%d\n", m1, d1, y1);
    //printf("Second date: %d/%d/%d\n", m2, d2, y2);

    if (y1 < y2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
    else if (y1 > y2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
    else {
        if (m1 < m2) 
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
        else if (m1 > m2) 
            printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
        else {
            if (d1 < d2)
                printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
            else if (d1 > d2)
                printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
            else 
                printf("%d/%d/%d is the same as %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
        }
    }


    return (0);
}