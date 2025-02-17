#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;

    // Read one integer from the input
    scanf("%d", &num);

    // Check if the number is NOT greater than zero using the! operator
    bool result =!(num > 0); 
    // or, more readably: bool result = num <= 0;

    // Print "True" if the condition is true, "False" otherwise
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
