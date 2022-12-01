#include <stdio.h>

int main() {
  // input:
  int cols, rows;
  printf("enter cols: ");
  scanf("%i", &cols);
  printf("enter rows: ");
  scanf("%i", &rows);
  if (cols <= 0 || rows <= 0) {
    printf("error!");
    return 0;
  }
  int **arr = new int * [cols];
  for (int i = 0; i < cols; i++) {
    arr[i] = new int[rows];
    for (int j = 0; j < rows; j++) {
      printf("enter %i, %i element: ", i + 1, j + 1);
      scanf("%i", &arr[i][j]);
    }
  }
  
  // output:
  for (int i = 0; i < cols; i++) {
    bool is_write = true;
    while (is_write) {
      is_write = false;
      for (int j = 0; j < rows - 1; j++) {
        if (arr[i][j] > arr[i][j + 1]) {
          is_write = true;
          int save = arr[i][j + 1];
          arr[i][j + 1] = arr[i][j];
          arr[i][j] = save;
        }
      }
    }
  }

  printf("output:\n");
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
      printf("%i ", arr[i][j]);
    }
    printf("\n");
  }
  
  // clear:
  for (int i = 0; i < cols; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}
