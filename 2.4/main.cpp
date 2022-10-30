#include <stdio.h>

int main() {
  int day;
  printf("day = ");
  scanf("%i", &day);
  if (day < 1 || day > 7) {
    printf("Error");
    return 0;
  } else {
    switch(day) {
      case 1: printf("Monday"); break;
      case 2: printf("Tuesday"); break;
      case 3: printf("Wednesday"); break;
      case 4: printf("Thursday"); break;
      case 5: printf("Friday"); break;
      case 6: printf("Saturday"); break;
      case 7: printf("Sunday"); break;
    }
  }
}
