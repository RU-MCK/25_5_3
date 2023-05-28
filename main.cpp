#include <iostream>
#include <cmath>

struct vector1 {
  double x = 0;
  double y = 0;
};
struct vector2 {
  double x = 0;
  double y = 0;
};
void add() {
  vector1 A;
  vector2 B;
  std::cout << "Enter the first coordinate of vector 'A': \n";
  std::cin >> A.x;
  std::cout << "Enter the second coordinate of vector 'A': \n";
  std::cin >> A.y;
  std::cout << "Enter the first coordinate of vector 'B': \n";
  std::cin >> B.x;
  std::cout << "Enter the second coordinate of vector 'B': \n";
  std::cin >> B.y;
  std::cout << "Answer: (" << A.x + B.x << "," << A.y + B.y << ")" << std::endl;
}
//---------------------------------------------------------------------------------
void subtract() {
  vector1 A;
  vector2 B;
  std::cout << "Enter the first coordinate of vector 'A': \n";
  std::cin >> A.x;
  std::cout << "Enter the second coordinate of vector 'A': \n";
  std::cin >> A.y;
  std::cout << "Enter the first coordinate of vector 'B': \n";
  std::cin >> B.x;
  std::cout << "Enter the second coordinate of vector 'B': \n";
  std::cin >> B.y;
  std::cout << "Answer: (" << A.x + (-B.x) << "," << A.y + (-B.y) << ")" << std::endl;
}
//---------------------------------------------------------------------------------
void scale() {
  vector1 A;
  double scale = 0;
  std::cout << "Enter the first coordinate of vector 'A': \n";
  std::cin >> A.x;
  std::cout << "Enter the second coordinate of vector 'A': \n";
  std::cin >> A.y;
  std::cout << "Enter the scale: \n";
  std::cin >> scale;
  std::cout << "Answer: (" << A.x * scale << "," << A.y * scale << ")" << std::endl;
}
//---------------------------------------------------------------------------------
void length() {
  vector1 A;
  std::cout << "Enter the first coordinate of vector 'A': \n";
  std::cin >> A.x;
  std::cout << "Enter the second coordinate of vector 'A': \n";
  std::cin >> A.y;
  std::cout << "Answer: " << sqrt(A.x * A.x + A.y * A.y) << std::endl;
}
//---------------------------------------------------------------------------------
void normalize() {
  vector1 A;
  std::cout << "Enter the first coordinate of vector 'A': \n";
  std::cin >> A.x;
  std::cout << "Enter the second coordinate of vector 'A': \n";
  std::cin >> A.y;
  double length = sqrt(A.x * A.x + A.y * A.y);
  std::cout << "Answer: (" << A.x / length << "," << A.y / length << ")" << std::endl;
}
//---------------------------------------------------------------------------------
int main() {
  std::cout << "Enter command:" << std::endl
            << "< add >" << std::endl
            << "< subtract >" << std::endl
            << "< scale >" << std::endl
            << "< length >" << std::endl
            << "< normalize >" << std::endl;
  std::string answer;
  std::cin >> answer;
  if (answer == "add") {
    add();
  } else if (answer == "subtract") {
    subtract();
  } else if (answer == "scale") {
    scale();
  } else if (answer == "length") {
    length();
  } else if (answer == "normalize") {
    normalize();
  } else
    std::cout << "Enter Error!";
  return 0;
}
