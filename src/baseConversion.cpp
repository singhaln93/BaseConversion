#include "baseConversion.h"
using namespace std;

namespace {}

BaseConversion::BaseConversion() {}

/**
 * @brief utility function to reverse a string
 *
 */
void BaseConversion::revString(char str[], int length) {
  int start = 0;
  int end = length - 1;
  while (start < end) {
    swap(*(str + start), *(str + end));
    start++;
    end--;
  }
}

/**
 * @brief utility function to implementation of itoa()
 *
 * @param num
 * @param str
 * @param base
 * @return char*
 */
char *BaseConversion::itoa(int num, char *str, int base) {
  int i = 0;
  bool isNegative = false;

  /* Handle 0 explicitely, otherwise empty string is printed for 0 */
  if (num == 0) {
    str[i++] = '0';
    str[i] = '\0';
    return str;
  }

  // In standard itoa(), negative numbers are handled only with
  // base 10. Otherwise numbers are considered unsigned.
  if (num < 0 && base == 10) {
    isNegative = true;
    num = -num;
  }

  // Process individual digits
  while (num != 0) {
    int rem = num % base;
    str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
    num = num / base;
  }

  // If number is negative, append '-'
  if (isNegative)
    str[i++] = '-';

  str[i] = '\0'; // Append string terminator

  // Reverse the string
  revString(str, i);

  return str;
}

/**
 * @brief utility function to convert from hex(str) to dec(str)
 *
 * @param input
 * @return unsigned long long
 */
unsigned long long BaseConversion::hex2dec(const string &input) {
  unsigned long long n;
  stringstream ss;
  ss << hex << uppercase << input;
  // ss << hex << lowercase << input;
  ss >> n;
  return n;
}

/**
 * @brief utility function to convert from int to bin(bitform)
 *
 * @param input
 * @return std::bitset<8>
 */
std::bitset<8> BaseConversion::int2bin(const int &input) {
  std::bitset<8> bin(input);
  return bin;
}

// char* BaseConversion::intarr2chararr(int arr[16], int length) {
//   char output[length];
//   for (int i = 0; i < length; ++i) {
//     output[i] = arr[i];
//     output[i] = '\0'; // Append string terminator
//   }
//   return output;
// }