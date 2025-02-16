#include<stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    char rev[100];

    for (int i = strlen(str) - 1; i >= 0; i--){
        int j = 0;
        rev[j] = str[i] // Print characters in reverse order
        int j++;
    }   

    if(strcmp(rev,str) ==0){
        printf("Palindrome");
    }else{
        printf("")
    }

    return 0;
}