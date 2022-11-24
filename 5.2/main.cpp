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
  int **arr = new int*[cols];
  for (int i = 0; i < cols; i++) {
    arr[i] = new int[rows];
    for (int j = 0; j < rows; j++) {
      printf("enter %i, %i array value: ", i + 1, j + 1);
      scanf("%i", &arr[i][j]);
    }
  }
  
  // output:
  printf("output:\n\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows - 1; j++) {
      printf("%i ", arr[i][j]);
    }
    printf("%i\n", arr[i][rows - 1]);
    // clear subarray for memory:
    delete[] arr[i];
  }
  // clear array for memory:
  delete[] arr;
}
