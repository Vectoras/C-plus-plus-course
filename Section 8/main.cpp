#include <iostream>

int main () {
  std::cout << "\n";

  int current_sum;
  const int dollar{100}, quarter{25}, dime{10}, nickel{5}, penny{1};

  std::cout << "Please insert a number of cents: ";
  std::cin >> current_sum;

  std::cout << "\ndollars: " << current_sum / dollar;
  current_sum %= dollar;

  std::cout << "\nquarters: " << current_sum / quarter;
  current_sum %= quarter;
  
  std::cout << "\ndimes: " << current_sum / dime;
  current_sum %= dime;

  std::cout << "\nnickels: " << current_sum / nickel;
  current_sum %= nickel;

  std::cout << "\npennies: " << current_sum / penny;

  std::cout << "\n";
  return 1;
}