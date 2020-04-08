#include <stdio.h>

void array_sort(int a[], int arrSize1) {
    int temp;
    if (arrSize1 > 1) {
        for (int i = 0; i < arrSize1; ++i) {
            if (a[i] > a[arrSize1-1]) {
                temp = a[arrSize1-1];
                a[arrSize1-1] = a[i];
                a[i] = temp;
            }
        }

        return array_sort(a, arrSize1-1);
    }

}

int main() {
    int arr[5], arrSize = 5;

    printf("Enter %d numbers, either positive or negative: ", arrSize);
    for (int count = 0; count < arrSize; ++count)
        scanf("%d", &arr[count]);


    array_sort(arr, arrSize);

    for (int i = 0; i < arrSize; ++i)
        printf("%d ", arr[i]);

    return 0;
}

