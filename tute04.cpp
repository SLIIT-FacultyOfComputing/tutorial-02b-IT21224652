/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long Factorial(int no)
{
  long fac = 1;
  int count;

  for(count = no; count >= 1; count --)
  {
    fac = fac * count;
  }
  return fac;
}

long nCr(int n, int r)
{
  long nCr = 0, return_factorial_n = 0, return_factorial_r = 0, return_factorial_sub = 0;

  return_factorial_n = Factorial(n);
  return_factorial_r = Factorial(r);
  return_factorial_sub = Factorial(n-r);

  nCr = return_factorial_n / (return_factorial_r * return_factorial_sub);

  return nCr;
}