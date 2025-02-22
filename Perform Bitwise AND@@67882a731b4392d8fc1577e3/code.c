#include <stdio.h>

int main() {
  int num1, num2;

  // Read two integers from input
  scanf("%d %d", &num1, &num2);

  // Perform bitwise AND operation
  int result = num1 & num2;

  // Print the result
  printf("%d\n", result);

  return 0;
}
