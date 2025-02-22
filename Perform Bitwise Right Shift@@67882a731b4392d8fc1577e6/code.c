#include <stdio.h>

int main() {
  int number, positions;

  // Read the number and the number of positions to shift
  scanf("%d %d", &number, &positions);

  // Perform the right shift operation
  int result = number >> positions;

  // Print the result
  printf("%d\n", result);

  return 0;
}
