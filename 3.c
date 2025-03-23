//WAC program to reverse a string without using string function.

#include <stdio.h>
#define MAX 100

void main(){
    char str[MAX], temp;
    int len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    

    for (len=0; str[len]!='\0';len++);
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("Reverse string is: %s", str);
}