#include <stdio.h>

int main() {
  int min = 2, max = 100, size = 0;
  printf("enter array size(%i-%i): ", min, max);
  scanf("%i", &size);
  if (size < min || size > max) {
    printf("error!");
    return 0;
  }
  int arr[size];
  for (int i = 0; i < size; i++) {
    printf("enter %i element of array: ", i + 1);
    scanf("%i", &arr[i]);
  }
  
  // sort array:
  bool is_sort = true;
  while(is_sort) {
    is_sort = false;
    for (int i = 0; i < (size - 1); i++) {
      if (arr[i] > arr[i + 1]) {
        int c = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = c;
        is_sort = true;
      }
    }
  }
  
  // output sorted array:
  printf("\noutput: ");
  for (int i = 0; i < (size - 1); i++) {
    printf("%i, ", arr[i]);
  }
  printf("%i\n", arr[size - 1]);
}
