#include <stdio.h>
#include <string.h>

int main() {
  char str[20];
  printf("enter text: ");
  scanf("%s", str);
  char last = str[strlen(str) - 1];

  printf("your text is: %s\nlast char is %c\n", str, last);
  char save = str[0];
  str[0] = last;
  str[strlen(str) -1] = save;
  printf("replace last char to start, result: %s\n", str);
}
