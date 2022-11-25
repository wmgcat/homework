#include <stdio.h>

int main() {
  int count;
  printf("count numbers [1-N]: ");
  scanf("%i", &count);
  if (count <= 0) {
    printf("Error!");
    return 0;
  }
  int min, max;
  float middle = 0;
  for (int i = 0; i < count; i++) {
    int num;
    printf("enter %i number: ", i);
    scanf("%i", &num);
    if (i == 0) {
      min = num;
      max = num;
    } else {
      if (min > num) {
        min = num;
      }
      if (max < num) {
        max = num;
      }
    }
    middle += (float)num;
  }
  middle /= count;
  
  // output info:
  printf("middle: %f, min: %i, max: %i\n", middle, min, max);
}
