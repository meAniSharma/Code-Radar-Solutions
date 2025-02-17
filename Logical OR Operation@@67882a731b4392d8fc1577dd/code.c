#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;

    // Read two space-separated integers from the input
    scanf("%d %d", &num1, &num2);

    // Check if at least one number is greater than zero using the || operator
    bool result = (num1 > 0) || (num2 > 0);

    // Print "True" if the condition is true, "False" otherwise
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
