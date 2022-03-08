#include <iostream>

int main () {
  int number;

  std::cout << "\nEnter your favourite number between 1 and 100: ";
  std::cin >> number;

  std::cout << "Amazing, that is my favourite number too!\n";
  std::cout << "No really, " << number << "is my favourite number too!!\n\n";

  return 0;
}