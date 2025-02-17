#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;

    // Read two space-separated integers from the input
    scanf("%d %d", &num1, &num2);

    // Check if num1 is less than or equal to num2
    bool result = num1 <= num2;

    // Print "True" if the condition is true, "False" otherwise
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
