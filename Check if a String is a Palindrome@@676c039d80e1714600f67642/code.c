#include<stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    char str2[100];
    char rev[100];
    strcpy(str2,str);

    for (int i = strlen(str) - 1; i >= 0; i--){
        int j = 0;
        rev[j] = str[i] // Print characters in reverse order
        int j++;
    }   

    if(str2==rev){
        printf("");
    }else{
        printf("")
    }

    return 0;
}