/*Write a c program using switch case without using string functions
a) length of a string
b) copy a string 
c) concatenate a string 
d) compare two strings
*/

#include<stdio.h>
#define MAX 100

int main(){

    int choice;
    char str[MAX];

    printf("Enter a base string string: ");
    scanf("%[^\n]", str);
    printf("Enter your choice: \n");
    printf("1. Length of a string\n");
    printf("2. Copy a string\n");
    printf("3. Concatenate a string\n");
    printf("4. Compare two strings\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int i;
            for(i=0;str[i]!='\0';i++);
            printf("Length of the string is: %d\n", i);
            break;
        }

        case 2:
        {
            char str2[MAX];int i;
            for(i=0;str[i]!='\0';i++)
            {
                str2[i]=str[i];
            }
            str2[i]='\0';
            printf("Copied string is: %s\n", str2);
            break;

        }

        case 3:
        {
            char str2[MAX];
            printf("Enter a string to concatenate: ");
            scanf(" %[^\n]", str2);
            int len,i;
            for(len=0;str[len]!='\0';len++);
            for(i=0;str2[i]!='\0';i++)
            {
                str[len+i]=str2[i];
            }
            str[len+i]='\0';
            printf("Concatenated string is: %s\n", str);
            break;
        }

        case 4:
        {
            char str2[MAX];
            printf("Enter a string to compare:");
            scanf("%[^\n]%s", str2);
            int i;
            for(i=0;str[i]!='\0' && str2[i]!='\0';i++)
            {
                if(str[i]!=str2[i])
                {
                    printf("Strings are not equal\n");
                    break;
                }
            }
            if(str[i]=='\0' && str2[i]=='\0')
            {
                printf("Strings are equal\n");
            }
            else if (str[i]!='\0'){
                printf("String 2 is a substring of string 1\n");
            }
            else{
                printf("String 1 is a substring of string 2\n");
            }
            break;
            
    
        }

        default:
        {
            printf("Invalid choice\n");
            break;
        }

}
    return 0;
}