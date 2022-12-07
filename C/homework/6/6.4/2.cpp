#include <stdio.h>
#include <string.h>

int main() {
  // input:
  char str[20], substr[20];
  printf("enter text: ");
  scanf("%s", str);

  // output:
  int len = strlen(str);
  for (int i = len - 1; i > -1; i--) {
    substr[len - i - 1] = str[i];
  }
  printf("output:\noriginal: %s\nreverse: %s\n", str, substr);
}
