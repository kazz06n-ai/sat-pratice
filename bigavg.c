#include <stdio.h>
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float avg = sum / size;
    printf("Average = %.2f\n", avg);
    for (int i = 0; i < size; i++) {
        if (arr[i] > avg) {
            printf("Element greater than average: %d\n", arr[i]);
        }
    }
    return 0;
}