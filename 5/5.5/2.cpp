#include <stdio.h>

int main() {
  // input:
  int cols, rows;
  printf("enter cols: ");
  scanf("%i", &cols);
  printf("enter rows: ");
  scanf("%i", &rows);
  if (rows <= 0 || cols <= 0) {
    printf("Error!");
    return 0;
  }
  int sum = cols * rows;
  int *arr = new int[sum], *subarr = new int[sum];
  for (int i = 0; i < sum; i++) {
    printf("enter %i element: ", i + 1);
    scanf("%i", &arr[i]);
    subarr[(i - (i / cols) * cols) * cols + (i / cols)] = arr[i];
  }
  // output:
  printf("output:\n\n");
  for (int i = 0; i < sum; i++) {
    if ((i % cols) == 0) {
      printf("\n");
    }
    printf("%i ", arr[i]);
  }
  // clear array for memory:
  delete[] arr;

  printf("\ninvert:\n\n");
  for (int i = 0; i < sum; i++) {
    if ((i % cols) == 0) {
      printf("\n");
    }
    printf("%i ", subarr[i]);
  }
  // clear array for memory:
  delete[] subarr;
}
