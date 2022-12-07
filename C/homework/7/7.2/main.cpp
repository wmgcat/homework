#include <stdio.h>

void fill(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }
}
void draw(int *arr, int size) {
  printf("array(%i): ", size);
  for (int i = 0; i < size; i++) {
    printf("%i ", arr[i]);
  }
  printf("\n");
}

int main() {
  // init:
  int *arr = new int[10];
  int *subarr = new int[20];
  fill(arr, 10);
  fill(subarr, 20);
  
  // output:
  draw(arr, 10);
  draw(subarr, 20);

  // clear:
  delete[] arr;
  delete[] subarr;
}
