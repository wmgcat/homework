#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int rows, cols;
  int vmin = -2, vmax = 7;
  int range = abs(vmin) + abs(vmax);

  // input:
  printf("input rows: ");
  scanf("%i", &rows);
  printf("input cols: ");
  scanf("%i", &cols);
  if (rows <= 0 || cols <= 0) {
    printf("Error!");
    return 0;
  }

  // output:
  int **arr = new int*[rows];
  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
    for (int j = 0; j < cols; j++) {
      int value = vmin + (rand() % (range + 1));
      arr[i][j] = value;
      printf("%i ", arr[i][j]);
    }
    printf("\n");
  }

  // clear:
  for (int i = 0; i < rows; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}
