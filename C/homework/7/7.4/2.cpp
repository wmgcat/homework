#include <stdio.h>
#include <string.h>

void replaceChar(char *source, char *destr, char replace) {
  for (int i = 0, count = 0; i < strlen(destr); i++) {
    if (destr[i] == EOF) {
      break;
    }
    if (destr[i] == replace) {
      count++;
      continue;
    }
    source[i - count] = destr[i];
  }
}

int main() {
  // input:
  char str[100], nstr[100];
  char dchr = ' ';
  printf("enter string: ");
  scanf("%[^\n]s", str);

  // update & output:
  replaceChar(nstr, str, dchr);
  printf("output:\noriginal: %s\nreplace: %s\n", str, nstr);
}
