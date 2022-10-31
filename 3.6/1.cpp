#include <stdio.h>

int main() {
  int multi = 5;
  for (int i = 1; i <= 10; i++) {
    int sum = i * multi;
    printf("%i * %i = %i\n", multi, i, sum);
  }
}
