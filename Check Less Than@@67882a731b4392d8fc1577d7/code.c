#include <stdio.h>
#include <stdbool.h> // Include for boolean data type

int main() {
    int num1, num2;

    // Input: Read two integers from the user
    scanf("%d %d", &num1, &num2);

    // Comparison and Output
    if (num1 < num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
