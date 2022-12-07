#include <stdio.h>

int main() {
  int pinA, pinB;
  printf("pinA = ");
  scanf("%i", &pinA);
  printf("pinB = ");
  scanf("%i", &pinB);
  if ((pinA == 325 && pinB == 542) || (pinA == 222 && pinB == 498) || (pinA == 339 && pinB == 290)) 
  {
    printf("pinA and pinB is acceptable!");
  }
  else
  {
    printf("access is denied!");
  }
}
