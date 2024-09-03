#include <cstdlib>
#include <iostream>

std::string getMonthName(int month) {
  switch (month) {
  case 1:
    return "January";
  case 2:
    return "February";
  case 3:
    return "March";
  case 4:
    return "April";
  case 5:
    return "May";
  case 6:
    return "June";
  case 7:
    return "July";
  case 8:
    return "August";
  case 9:
    return "September";
  case 10:
    return "October";
  case 11:
    return "November";
  case 12:
    return "December";
  default:
    return "Invalid month number";
  }
}

int main() {
  int month;

  std::cout << "Enter a number: ";
  std::cin >> month;

  std::string monthName = getMonthName(month);

  if (monthName == "Invalid month number") {
    std::cout << "Invalid number. Please enter a number between 1 and 12."
              << std::endl;
  } else {
    std::cout << "The month is: " << monthName << std::endl;
  }

  return EXIT_SUCCESS;
}
