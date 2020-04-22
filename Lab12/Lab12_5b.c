#include <stdio.h>
//#include <string.h>

typedef struct{
    int i;
    char c;
    float f;
} my_struct;

void func(my_struct *varName) {
    printf("Address: %p\n", varName);
}

int main() {

    my_struct bruh = {88,'a',4.3};

    func(&bruh);

}


