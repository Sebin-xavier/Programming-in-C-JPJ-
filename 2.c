//WAC program to check whether a string is a  palindrome or not without using string functions
#include <stdio.h>
#include <string.h>
#define MAX 100

void main(){

    char str[MAX];
    char str2[MAX];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int i, len;
    len=strlen(str);
    strcpy(str2, str);
    strrev(str);
    for (i=0;i<len;i++){
        if (str[i]!=*(str2+i)){
            printf("The string is not a palindrome\n");
            break;
        }
    }
    if (i==len){
        printf("The string is a palindrome\n");}




}