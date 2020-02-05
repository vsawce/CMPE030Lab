#include <stdio.h>
#include <math.h>

int main (void) {
    double X1, X2, Y1, Y2;
    double D;
    printf("\nEnter the first point, P1, in the form x1 y1> ");
    scanf("%lf%lf", &X1, &Y1);
    printf("  You entered: P1 = (%g, %g)\n", X1, Y1);
    printf("\nEnter the second point, P2, in the form, x2 y2> ");
    scanf("%lf%lf", &X2, &Y2);
    printf("  You entered: P2 = (%g, %g)\n", X2, Y2);
    D = sqrt(pow((X2-X1),2) + pow((Y2-Y1),2));
    printf("\nThestraight-line distance between P1 and P2 is %.4f \n\n", D);

    return 0;
}
