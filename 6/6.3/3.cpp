#include <stdio.h>
#include <string.h>

int main() {
  // input:
  char str[20];
  printf("enter text: ");
  scanf("%s", str);
  int max = strlen(str), pos;
  printf("enter position to delete char(1-%i): ", max);
  scanf("%i", &pos);
  if (--pos < 0 || pos > max - 1) {
    printf("Error!");
    return 0;
  }  
  // output:
  str[pos] = ' ';
  for (int i = pos; i < max - 1; i++) {
    char save = str[i + 1];
    str[i + 1] = str[i];
    str[i] = save;
  }
  printf("result: %s\n", str);
}
