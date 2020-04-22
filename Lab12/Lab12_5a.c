#include <stdio.h>
//#include <string.h>

//a
typedef struct{
    int i;
    char c;
    float f;
} my_struct;

void func(my_struct varName) {
    printf("Value: %d\n", varName.i);
}

int main() {

    my_struct bruh = {88,'a',4.3};

    //b
    func(bruh);

}


