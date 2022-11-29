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
  int **arr = new int* [cols];
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
    for (int j = 0; j < rows; j++) {
      printf("%i ", arr[i][j]);
    }
    printf("\n");
  }

  // invert:
  int save;
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      save = arr[j][i];
      arr[j][i] = arr[i][j];
      arr[i][j] = save;
      arr[j][i] = save;
    }
  }
  printf("\ninvert:\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%i ", arr[i][j]);
    }
    printf("\n");
  }

  // clear array for memory:
  for (int i = 0; i < cols; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}
