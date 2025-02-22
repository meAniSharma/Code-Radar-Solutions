#include <stdio.h>
#include <stdbool.h>

int main() {
  int num1, num2;

  // Read two integers from input
  scanf("%d %d", &num1, &num2);

  // Check if neither number is greater than zero
  bool result = !(num1 > 0) && !(num2 > 0);

  // Print "True" if the condition is met, otherwise print "False"
  if (result) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}
