#include <stdio.h>

int main(void) {
    float maxScore, usrScore, percentage;
    printf("Enter maximum score: ");
    scanf("%f", &maxScore);
    printf("Enter user score: ");
    scanf("%f", &usrScore);
    percentage = (usrScore/maxScore)*100;
    printf("Based on %.0f/%.0f, your percentage is: %.2f%%\n", usrScore,maxScore,percentage);
    return 0;
}