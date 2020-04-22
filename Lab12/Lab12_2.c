#include <stdio.h>
#include <string.h>

int main() {
    //a
    struct student {
        char firstN[20], lastN[20]; 
        int enrYear;
        float GPA;

    };

    struct student a_students[2];

    strcpy(a_students[0].firstN,"Student");
    strcpy(a_students[0].lastN,"One");
    a_students[0].enrYear = 2000;
    a_students[0].GPA = 2.0;
    strcpy(a_students[1].firstN,"Student");
    strcpy(a_students[1].lastN,"Two");
    a_students[1].enrYear = 2001;
    a_students[1].GPA = 3.0;

    //c
    for (int i = 0; i < 2; i++) {
        printf("%s ", a_students[i].firstN);
        printf("%s ", a_students[i].lastN);
        printf("%d ", a_students[i].enrYear);
        printf("%f\n", a_students[i].GPA);
    }


    return 0;
}