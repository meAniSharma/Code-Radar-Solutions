#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 1) 
        decimalToBinary(num / 2);  // Recursively divide by 2
    printf("%d", num % 2);  // Print remainder
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}
