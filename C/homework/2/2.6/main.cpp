#include <stdio.h>

int main() {
  // input data:
  int day, month, year;
  printf("day: ");
  scanf("%i", &day);
  printf("month (1-12): ");
  scanf("%i", &month);
  if (month < 1 || month > 12) {
    printf("Error, %i > or < 1-12", month);
    return 0;
  }
  printf("year: ");
  scanf("%i", &year);
  // logical:
  printf("info:\n");
  if (year % 4 == 0) {
    printf("%i is leap year\n", year);
  } else {
    printf("%i is non-leap year\n", year);
  }
  int ecalendar = (year - 4) % 12;
  printf("year according to the eastern calendar: ");
  switch(ecalendar) {
    case 0: printf("rat"); break;
    case 1: printf("bull"); break;
    case 2: printf("tiger"); break;
    case 3: printf("rabbit"); break;
    case 4: printf("dragon"); break;
    case 5: printf("snake"); break;
    case 6: printf("horse"); break;
    case 7: printf("goat"); break;
    case 8: printf("monkey"); break;
    case 9: printf("cock"); break;
    case 10: printf("dog"); break;
    case 11: printf("hog"); break;
  }
  printf("\nzodiac sign: ");
  if ((month == 12 && day > 21) || (month == 1 && day <= 20)) {
    printf("Capricorn");
  } else
  if ((month == 1 && day > 21) || (month == 2 && day <= 20)) {
    printf("Aquarius");
  } else 
  if ((month == 2 && day > 21) || (month == 3 && day <= 20)) {
    printf("Fish");
  } else 
  if ((month == 3 && day > 21) || (month == 4 && day <= 20)) {
    printf("Aries");
  } else
  if ((month == 4 && day > 21) || (month == 5 && day <= 20)) {
    printf("Taurus");
  } else
  if ((month == 5 && day > 21) || (month == 6 && day <= 20)) {
    printf("Twins");
  } else
  if ((month == 6 && day > 21) || (month == 7 && day <= 20)) {
    printf("Cancer");
  } else
  if ((month == 7 && day > 21) || (month == 8 && day <= 20)) {
    printf("Leo");
  } else
  if ((month == 8 && day > 21) || (month == 9 && day <= 20)) {
    printf("Maid");
  } else
  if ((month == 9 && day > 21) || (month == 10 && day <= 20)) {
    printf("Libra");
  } else
  if ((month == 10 && day > 21) || (month == 11 && day <= 20)) {
    printf("Scorpio");
  } else
  if ((month == 11 && day > 21) || (month == 12 && day <= 20)) {
    printf("Sagittarius");
  }
}
