#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    int avg;
    scanf("&d %d %d",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}