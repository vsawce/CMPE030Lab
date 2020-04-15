#include <stdio.h>

void func(int *adr) {
    *adr = 120;
}

int main() {
    int i;

    func(&i);

    printf("%d\n", i);

    return 0;
}
