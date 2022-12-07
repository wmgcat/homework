#include <stdio.h>

int main() {
  int size, min, max;
  float sum = 0;
  bool is_first = true;
  
  // input:
  printf("enter array size: ");
  scanf("%i", &size);
  if (size <= 0) {
    printf("Error!");
    return 0;
  }
  int arr[size];
  for (int i = 0; i < size; i++) {
    printf("enter %i element of array: ", i + 1);
    scanf("%i", &arr[i]);
    sum += (float)arr[i];
    if (is_first) {
      min = arr[i];
      max = arr[i];
      is_first = false;
    } else {
      if (min > arr[i]) min = arr[i];
      if (max < arr[i]) max = arr[i];
    }
  }

  // output:
  printf("output:\nmin: %i\nmax: %i\nmiddle: %f\nsum: %i\n", min, max, sum / size, (int)sum);
}
