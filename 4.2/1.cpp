#include <stdio.h>

int main() {
  int length = 7;
  int arr[length];
  for (int i = 0; i < length; i++) {
    printf("%i number: ", i + 1);
    scanf("%i", &arr[i]);
  }
  printf("output array: ");
  for (int i = 0; i < length - 1; i++) {
    printf("%i ", arr[i]);
  }
  printf("%i\n", arr[length - 1]);
}
