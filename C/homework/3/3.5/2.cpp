#include <stdio.h>

int main() {
  int i = 0;
  while(i < 15) {
    if (i % 2 != 0) {
      printf("%i\n", i);
    }
    i++;
  }
}
