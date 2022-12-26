#include <stdio.h>
#include <string>

#define ARRAY_SIZE 5

using namespace std;

void sortArrayString(string arr[]) {
  bool is_sort = true;
  while(is_sort) {
    is_sort = false;
    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
      if (arr[i][0] > arr[i + 1][0]) {
        string temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        is_sort = true;
      }            
    }
    if (!is_sort) break;
  }
}

int main() {
  // input:
  string secondnames[ARRAY_SIZE] = {
    "Filipov", "Gerasimov", "Antonov",
    "Vovin", "Selezemba"
  };
  
  sortArrayString(secondnames);    

  // output:
  printf("result: \n");
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%s\n", secondnames[i].c_str());
  }
  return 0;
}
