#include <stdio.h>

int main() {
  int a, b;
  printf("a = ");
  scanf("%i", &a);
  printf("b = ");
  scanf("%i", &b);
  if (a > b) printf("a is more that b");
  else {
    if (a == b) printf("a = b");
    else printf("a is less that b");
  }
}
