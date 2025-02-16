#include <stdio.h>

void checkVowelOrConsonant(char ch) {
    // Convert uppercase to lowercase for uniform checking
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    int count = 0;

    if (ch >= 'a' && ch <= 'z') { // Check if it is a letter
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    printf("%d",count);
}

int main() {
    char ch;
    scanf(" %c", &ch); // Space before %c to ignore whitespace
    checkVowelOrConsonant(ch);
    return 0;
}
