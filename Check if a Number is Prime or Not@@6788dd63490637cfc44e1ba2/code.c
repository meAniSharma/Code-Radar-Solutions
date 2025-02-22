#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  if (num <= 1) {
    printf("Not Prime\n");
    return 0;
  }

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      printf("Not Prime\n");
      return 0;
    }
  }

  printf("Prime\n");
  return 0;
}
