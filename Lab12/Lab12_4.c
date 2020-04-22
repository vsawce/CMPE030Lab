#include <stdio.h>
//#include <string.h>

int main() {
    //a
    enum first_six_months{Jan, Feb, Mar, Apr, May, Jun};

    //b
    printf("%d ", Jan);
    printf("%d ", Feb);
    printf("%d ", Mar);
    printf("%d ", Apr);
    printf("%d ", May);
    printf("%d\n", Jun);


    //c
    enum last_six_months{Jul = 2, Aug, Sep, Oct, Nov, Dec};

    //d
    printf("%d ", Jul);
    printf("%d ", Aug);
    printf("%d ", Sep);
    printf("%d ", Oct);
    printf("%d ", Nov);
    printf("%d\n", Dec);

}