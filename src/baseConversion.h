/**
 * @file baseConversion.h
 * @author Neeraj Singhal
 * @date 2021-06-09
 *
 */

#ifndef BASECONVERSION_H
#define BASECONVERSION_H
#include <bitset>
#include <iomanip>
#include <math.h>
#include <sstream>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Base Conversion Class
 *
 */
class BaseConversion {
private:
  // static constexpr uint8_t byteSize {8};
public:
  BaseConversion();

  // utility functions
  void revString(char str[], int length);
  char *itoa(int num, char *str, int base);
  unsigned long long hex2dec(const std::string &input);
  std::bitset<8> int2bin(const int &input);
  // char *intarr2chararr(int arr[], int length);
};
#endif
