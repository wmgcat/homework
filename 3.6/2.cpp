#include <stdio.h>

int main() {
  int num, find = 7;
  while (num != find) {
    printf("num = ");
    scanf("%i", &num);
    if (num == find) break;
    if (num > find) {
      printf("%i > %i\n", num, find);
    } else {
      printf("%i < %i\n", num, find);
    }
  }
}
