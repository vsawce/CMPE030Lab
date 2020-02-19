#include <stdio.h> //include libraries

//gcc -o Lab4a.exe Lab4a.c
//./Lab4a.exe

//Vincent Saw, CMPE30L

int main(void) { //initialize the program
    int x1, y1, x2, y2, numer, denom; //declare variables
    /*
    printf("Enter first fraction: "); //usr prompt 1
    scanf("%d/%d", &x1,&y1);
    printf("Enter second fraction: "); //usr prompt 2 
    scanf("%d/%d", &x2,&y2);  
    */

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &x1,&y1,&x2,&y2);


    denom = y1*y2;
    numer = (x1*y2)+(x2*y1);
    printf("Fraction: %d/%d\n", numer, denom);
    return 0;
}