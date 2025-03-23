//. Find the no of vowels consonants and spaces in the given string.

#include<stdio.h>
#include<string.h>


int letters(char *str){
    int count=0;
    while(*str!='\0' && *str!=EOF){
        if((*str>='a' && *str<='z') || (*str>='A' && *str<='Z')){
            count++;
        }
        str++;
    }
    return count;
}


int vowels(char *str){

    char vovels[] = "aeiouAEIOU\0";
    int i=0;
    int count=0;
    while(*str!='\0' && *str!=EOF){

        for (int j=0;j<strlen(vovels);j++){
            if(*str==vovels[j]){
                count++;
            }
        }

        str++;
    }
    return count;


}

int space(char *str){
    
    int count=0;
    while(*str!='\0' && *str!=EOF){
        if(*str==' '){
            count++;
        }
        str++;
    }
    return count;
}

int main(){

    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int v=vowels(str);
    int s=space(str);
    printf("No of spaces in the string is: %d\n",s);
    printf("No of vowels in the string is: %d\n",v);
    printf("the no of consonants in the string is: %d",letters(str)-v);
    
    
    return 0;
}