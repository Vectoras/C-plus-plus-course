#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void print_numbers(std::vector<int> v) {
  std::cout << "[ ";

  for (auto element: v)
    std::cout << element << " ";

  std::cout << "]";
}

void read_new_number(std::vector<int> &v) {
  int n;
  std::cout << "Input a number: ";
  std::cin >> n;
  v.push_back(n);
  std::cout << n << " has been added!\n";
}

// void display_mean (std::vector<int> &v) {
//   double s{0};

//   std::cout << "The mean is: ";

//   for(auto element: v)
//     s += element;

//   std::cout << s/v.size() << "\n";  
// }

void display_mean (std::vector<int> &v) {

  std::cout << "The mean is: " << reduce(v.begin(), v.end()) / v.size(); 
}

void display_smallest_number(std::vector<int> &v) {
  int min{INT_MAX};

  for (auto element: v) 
    if (element < min)
      min = element;

  std::cout << "The smallest number is: " << min << "\n";
}

int main () {

  char option;
  std::vector<int> list {10, -10, 100, 500};

  do {
  std::cout << "\n";
  std::cout << "P - Print numbers \n"
            << "A - Add a number \n"
            << "M - Display mean of the numbers \n"
            << "S - Display the smallest number \n"
            << "Q - Quit \n";

  std::cout << "\nEnter your choice: ";
  std::cin >> option;

  switch (option) {
    case 'p':
    case 'P':
      std::cout << "Printing numbers: ";
      print_numbers(list);
      std::cout<<"\n";
      break;
    case 'a':
    case 'A':
      read_new_number(list);
      break;
    case 'm':
    case 'M':      
      display_mean(list);
      break;
    case 's':
    case 'S':
      display_smallest_number(list);
      break;
    default:
      std::cout << "Illegal Option!\n";
  }

  } while (option != 'q' && option != 'Q');

  std::cout << "\n";
  return 0;
}