#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double n;
    scanf("%lf",&n);
    printf("You entered: %.4lf",n);
    return 0;
}