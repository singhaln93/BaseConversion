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
#include <iostream>
#include <math.h>
#include <sstream>
#include <stdlib.h>
#include <string.h>

#define SHARED_NODISCARD [[nodiscard]]
#define SHARED_DEPRECATED [[deprecated]]
#define SHARED_MAYBE_UNUSED [[maybe_unused]]

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

  /**
   * @brief utility function to reverse a string
   *
   * @param str
   * @param length
   */
  void revString(char str[], int length);

  /**
   * @brief utility function to implementation of itoa()
   *
   * @param num
   * @param str
   * @param base
   * @return char*
   */
  char *itoa(int num, char *str, int base);

  /**
   * @brief utility function to convert from hex(str) to dec(str)
   *
   * @param input
   * @return unsigned long long
   */
  unsigned long long hex2dec(const std::string &input);

  /**
   * @brief utility function to convert from int to bin(bitform)
   *
   * @param input
   * @return std::bitset<8>
   */
  std::bitset<8> int2bin(const int &input);
  // char *intarr2chararr(int arr[], int length);

  template <typename T> SHARED_NODISCARD int sum(T a, T b);
};
#endif
