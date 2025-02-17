#include <stdio.h>
#include <string.h>

int main() {
    char str1[500];
    char str2[];
    
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    strcat(str1, str2);  // Concatenates str2 to str1
    
    printf("%s\n", str1);
    return 0;
}
