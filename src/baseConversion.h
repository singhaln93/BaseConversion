#ifndef BASECONVERSION_H
#define BASECONVERSION_H
#include <bitset>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;

class BaseConversion {
private:
  // static constexpr uint8_t byteSize {8};
public:
  BaseConversion();

  // utility functions
  void revString(char str[], int length);
  char *itoa(int num, char *str, int base);
  unsigned long long hex2dec(const string &input);
  std::bitset<8> int2bin(const int &input);
  // char *intarr2chararr(int arr[], int length);
};
#endif
