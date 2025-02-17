#include <stdio.h>
#include <stdbool.h>

int main() {
  int num1, num2;

  // Read two integers from the input, separated by a space
  scanf("%d %d", &num1, &num2);

  // Use the == operator to check if the numbers are equal
  bool areEqual = (num1 == num2);

  // Print "True" if they are equal, "False" otherwise
  if (areEqual) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}
