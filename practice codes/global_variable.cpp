#include <iostream>

int a = 10; // global a

int main() {
  // clrscr();

  int a = 15; // a redeclared, local to main
  std::cout << "\n Local a=" << a << " Global a =" << ::a << std::endl;

  ::a = 20;
  std::cout << "\n Local a=" << a << " Global a =" << ::a << std::endl;
  return 0;
}

//::-> scope resolution operator (used to declare global variables)
