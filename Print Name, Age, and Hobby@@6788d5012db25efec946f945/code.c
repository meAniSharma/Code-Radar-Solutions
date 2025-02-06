#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[20];
    int age;
    char hobby[20];
    scanf("%s %n %s",&name,&age,&hobby);
    printf("Name: %s: ",name);
    printf("Age: %s",age);
    printf("Hobby: %s",hobby);
    return 0;
}