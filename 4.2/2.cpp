#include <stdio.h>

int main() {
  int length;
  printf("array length: ");
  scanf("%i", &length);
  if (length <= 0) {
    printf("Error!");
    return 0;
  }
  int arr[length];
  for (int i = 0; i < length; i++) {
    printf("enter number (%i of %i):", i + 1, length);
    scanf("%i", &arr[i]);
  }
  printf("output:\n");
  for (int i = 0; i < length - 1; i++) {
    printf("%i ", arr[i]);
  }
  printf("%i\n", arr[length - 1]);
}
