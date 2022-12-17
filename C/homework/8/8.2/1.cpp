#include <iostream>
#include <stdio.h>

float divide(int x) {
  if (x == 0) throw std::overflow_error("divide by zero exception!");
  return 1024.0 / (float)x;
}

int main() {
  int value;
  printf("enter value: ");
  scanf("%i", &value);
  try {
    float temp = divide(value);
    printf("result: %f\n", temp);
  }
  catch(std::overflow_error &err) {
    printf("Error!\nMessage: %s\n", err.what());
  }
}
