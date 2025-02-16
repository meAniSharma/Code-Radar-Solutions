#include<stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    char rev[100];
    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--){
        rev[j] = str[i]; // Print characters in reverse order
        j++;
    }   

    rev[j] = '\0';

    if(strcmp(rev,str) ==0){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome")
    }

    return 0;
}