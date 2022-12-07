#include <stdio.h>
#include <string.h>

int main() {
  // input:
  char str[20];
  printf("enter text: ");
  scanf("%s", str);

  // output:
  str[0] = ' ';
  for (int i = 0; i < strlen(str) - 1; i++) {
    char save = str[i + 1];
    str[i + 1] = str[i];
    str[i] = save;
  }
  printf("output: %s\n", str);
}
