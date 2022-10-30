#include <stdio.h>

int main() {
  int i = 5, j = 15, sum = 0;
  while (i <= j) {
    sum += i;
    i++;
  }
  printf("sum = %i", sum);
}
