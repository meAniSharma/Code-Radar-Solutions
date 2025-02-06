#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[50], hobby[50];
    int age;
    scanf("%s %d %s",name,age,hobby);
    printf("Name: %s\n ", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}