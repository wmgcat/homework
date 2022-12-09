#include <stdio.h>
#include <string.h>

void replaceFirstAndLast(char *source, char *destr, char a) {
  source[0] = a;
  for (int i = 1; i < strlen(destr) - 1; i++) {
    source[i] = destr[i];
  }
  source[strlen(destr) - 1] = a;
}

int main() {
  // input:
  char rchr, str[20], nstr[20];
  printf("enter word: ");
  scanf("%s", str);
  while ((rchr = getc(stdin)) != '\n' &&  rchr != EOF) {}
  printf("new replacement char: ");
  rchr = getc(stdin);

  // update & output:
  replaceFirstAndLast(nstr, str, rchr);
  printf("output:\noriginal: %s\nchar: %c\nreplace: %s\n", str, rchr, nstr);
}
