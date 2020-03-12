//gcc -o Lab7_2.exe Lab7_2.c
//./Lab7_2.exe
#include <stdio.h>

int main(void) {
    int counter = 0;
    int m[sizeof(int)], d[sizeof(int)], y[sizeof(int)], earliestIndex, equal, eIndexTemp;
    while(1) {
        printf("Enter date on or after the year 2000 (mm/dd/yy) (0/0/0 to terminate): ");
        scanf("%d/%d/%d", &m[counter], &d[counter], &y[counter]); //record user input
        if (m[counter] == 0 && d[counter] == 0 && y[counter] == 0) {
            m[counter] = m[0]; //fail safe, discussed later in code
            y[counter] = y[0];
            break;
        }
        counter++;
    }
    
    equal = 1; //default to true
    for (int z = 0; z < counter-1; z++) {
        if (m[z] != m[z+1] || d[z] != d[z+1] || y[z] != y[z+1]) { //if month, day, or year numbers are different, then dates aren't equal
            equal = 0;
            break;
        }
    }

    if (equal) printf("All dates are equal.\n");
    else {
        eIndexTemp = 0;
        for (int i = 1; i < counter; i++) {
            if (d[eIndexTemp] > d[i]) {
                eIndexTemp = i;
                earliestIndex = eIndexTemp;
            }
        }
        eIndexTemp = 0;
        for (int j = 1; j < counter; j++) {
            if (m[eIndexTemp] > m[j]) {
                eIndexTemp = j;
                earliestIndex = eIndexTemp;
            }
        }
        if (m[eIndexTemp] == m[counter]) //fail safe if m[eIndexTemp] is the smallest in the array
            earliestIndex = 0;
        eIndexTemp = 0;
        for (int k = 1; k < counter; k++) {
            if (y[eIndexTemp] > y[k]) {
                eIndexTemp = k;
                earliestIndex = eIndexTemp;
            }
        }
        if (y[eIndexTemp] == y[counter]) //fail safe if y[eIndexTemp] is the smallest in the array
            earliestIndex = 0;
        printf("%02d/%02d/%02d is the earliest date.\n", m[earliestIndex], d[earliestIndex], y[earliestIndex]);
    }
    
    return (0);
}