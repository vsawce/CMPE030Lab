#include <stdio.h>

int main() {
    int var = 10;
    int *int_p;

    int_p = &var;

    printf("%p %p %d\n", &var, int_p, *int_p);

    return 0;
}