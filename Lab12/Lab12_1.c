#include <stdio.h>

int main() {
    //a
    struct student {
        char firstN[20], lastN[20]; 
        int enrYear;
        float GPA;

    };

    //b
    struct student a_student = {"Bruh", "Moment", 1999, 3.87};

    //c
    printf("%s\n", a_student.firstN);
    printf("%s\n", a_student.lastN);
    printf("%d\n", a_student.enrYear);
    printf("%f\n", a_student.GPA);


    return 0;
}