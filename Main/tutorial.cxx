// A simple program that computes the square root of a number
#include <iostream>
#include <cstdlib>
#include "mysqrt.h"

int main (int argc, char *argv[])
{
  if (argc < 2)
  {
    std::cout << "Usage: " << argv[0] << " number\n";
    return 1;
  }
  double inputValue = atof(argv[1]);
  double outputValue = cmake::my::mysqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue << "\n";
  return 0;
}

