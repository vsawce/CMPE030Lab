#include <stdio.h>

int main() {
    int var[] = {3, 4, 8};
    int *ptr;
    ptr = &var[0];

    for (int i = 0; i<3; i++) {
        printf("Address: %p | Val: %d\n", ptr, *ptr);
        ptr++;
    }

    return 0;
}