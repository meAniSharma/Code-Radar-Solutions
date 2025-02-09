#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Character");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Character");
    } else {
        printf("Not a Character");
    }
    return 0;
}