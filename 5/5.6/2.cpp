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
    int save = arr[i][rows - 1];
    arr[i][rows - 1] = arr[i][0];
    arr[i][0] = save;
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
