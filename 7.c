#include <stdio.h>

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i));
    }
}

void printArray(int *arr, int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

float sum(int *arr, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    inputArray(arr, size);

    // Print the elements of the array
    printArray(arr, size);
    float sum_=sum(arr,size);
    printf("Sum of the array elements is: %f\n", sum_);

    return 0;
}