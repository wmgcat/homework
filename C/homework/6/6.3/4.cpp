#include <stdio.h>
#include <string.h>

int main() {
  // input:
  char str[20];
  printf("enter text: ");
  scanf("%s", str);
  char rchr;
  while ((rchr = getc(stdin)) != '\n' &&  rchr != EOF) {}
  printf("enter char to delete: ");
  rchr = getc(stdin);
  printf("char: %c\n", rchr); 
  
  // output:
  char *pos;
  pos = strchr(str, rchr);
  while(pos != NULL) {
    int npos = pos - str;
    str[npos] = ' ';
    for (int i = npos; i < strlen(str) - 1; i++) {
      char save = str[i + 1];
      str[i + 1] = str[i];
      str[i] = save;
    }
    pos = strchr(str, rchr);
  }
  printf("result: %s\n", str);
  delete pos;
}
