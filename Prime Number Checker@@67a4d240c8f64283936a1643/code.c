#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    if (num == 2) return 1; // 2 is the only even prime

    if (num % 2 == 0) return 0; // Exclude even numbers > 2

    for (int i = 3; i <= num; i += 2) { // Check odd numbers only
        if (num % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime number
}

int main() {
    int n;
    scanf("%d", &n);

    while (n-- > 0) { // Simplified loop condition
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}
