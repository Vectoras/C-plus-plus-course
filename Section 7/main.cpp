#include <iostream>
#include <vector>

int main () {
  std::cout << "\n";

  std::vector<int> vector1, vector2;
  std::vector<std::vector<int>> vector_2d;

  vector1.push_back(10);
  vector1.push_back(20);

  vector2.push_back(100);
  vector2.push_back(200);

  std::cout << "vector1 - 1st time: " << "\n";
  std::cout << vector1.at(0) << "\n";
  std::cout << vector1.at(1) << "\n";

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  std::cout << "\n" << "vector_2d - 1st time: " << "\n";
  std::cout << vector_2d.at(0).at(0) << "\n";
  std::cout << vector_2d.at(0).at(1) << "\n";
  std::cout << vector_2d.at(1).at(0) << "\n";
  std::cout << vector_2d.at(1).at(1) << "\n";

  vector1.at(0) = 1000;

  std::cout << "\n" << "vector_2d - 2nd time: " << "\n";
  std::cout << vector_2d.at(0).at(0) << "\n";
  std::cout << vector_2d.at(0).at(1) << "\n";
  std::cout << vector_2d.at(1).at(0) << "\n";
  std::cout << vector_2d.at(1).at(1) << "\n";
  
  std::cout << "\n" << "vector1 - 2nd time:" << "\n";
  std::cout << vector1.at(0) << "\n";
  std::cout << vector1.at(1) << "\n";

  std::cout << "\n";
  return 0;
}