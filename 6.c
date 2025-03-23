#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int add(int *a,int *b){
    return *a+*b;
}

int main() {
    int num1, num2;

   
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(&num1, &num2);
    printf("The sum of %d and %d id %d\n",num1,num2,add(&num1,&num2));

    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}