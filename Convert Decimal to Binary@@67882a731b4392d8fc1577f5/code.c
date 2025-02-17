#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 1) 
        decimalToBinary(num / 2);  // Recursively divide by 2
    printf("%d", num % 2);  // Print remainder
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    decimalToBinary(num);
    printf("\n");

    return 0;
}
