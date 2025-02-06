#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[20];
    int age;
    char hobby[20];
    scanf("%c %n %c",&name,&age,&hobby);
    printf("Name: ",name);
    printf("Age: ",age);
    printf("Hobby: ",hobby);
    return 0;
}