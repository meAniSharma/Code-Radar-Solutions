#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str); // Reads a single word (use fgets for sentences)

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') { // Convert uppercase to lowercase
            ch += 32;
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
