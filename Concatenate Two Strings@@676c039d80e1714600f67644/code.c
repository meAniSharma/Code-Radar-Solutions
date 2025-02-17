#include <stdio.h>
#include <string.h>

int main() {
    char str1[500];
    char str2[500];
    
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);  // Concatenates str2 to str1
    
    printf("%s", str1);
    return 0;
}
