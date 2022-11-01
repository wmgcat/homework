#include <stdio.h>

int main() {
  int count;
  printf("count numbers [1-N]: ");
  scanf("%i", &count);
  if (count <= 0) {
    printf("Error!");
    return 0;
  }
  int nums[count], min, max;
  float middle = 0;
  
  for (int i = 0; i < count; i++) {
    int num;
    while(true) {
      printf("enter %i number: ", i);
      scanf("%i", &nums[i]);
      if (nums[i] > 0) break;
    }
    if (i == 0) {
      min = nums[i];
      max = nums[i];
    } else {
      if (min > nums[i]) {
        min = nums[i];
      }
      if (max < nums[i]) {
        max = nums[i];
      }
    }
    middle += (float)nums[i];
  }
  middle /= count;
  
  // output info:
  printf("middle: %f, min: %i, max: %i\n", middle, min, max);
}
