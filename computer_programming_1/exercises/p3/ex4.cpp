#include <iostream>

enum Day {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

int main() {
  int day;

  std::cin >> day;

  switch(--day) {
    case MONDAY:
      std::cout << "Monday" << std::endl;
      break;
    case TUESDAY:
      std::cout << "Tuesday" << std::endl;
      break;
    case WEDNESDAY:
      std::cout << "Wednesday" << std::endl;
      break;
    case THURSDAY:
      std::cout << "Thursday" << std::endl;
      break;
    case FRIDAY:
      std::cout << "Friday" << std::endl;
      break;
    case SATURDAY:
      std::cout << "Saturday" << std::endl;
      break;
    case SUNDAY:
      std::cout << "Sunday" << std::endl;
      break;

  }

  return 0;
}
