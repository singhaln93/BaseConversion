/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-06-09
 *
 */

#include "baseConversion.h"

int main() {
  BaseConversion base;

  char str[100];
  int pNumber{1567};
  int nNumber{-1567};
  std::cout << "Int:" << pNumber << "\tDec Str:" << base.itoa(pNumber, str, 10)
            << std::endl;
  std::cout << "Int:" << nNumber << "\tDec Str:" << base.itoa(nNumber, str, 10)
            << std::endl;
  std::cout << "Int:" << pNumber << "\tBin Str:" << base.itoa(pNumber, str, 2)
            << "b" << std::endl;
  std::cout << "Int:" << pNumber << "\tOct Str:" << base.itoa(pNumber, str, 8)
            << std::endl;
  std::cout << "Int:" << pNumber << "\tHex Str:" << base.itoa(pNumber, str, 16)
            << "h" << std::endl;

  std::string i1 = "7D";
  std::cout << "Hex Str:" << i1 << "h"
            << "\tDec Str:" << base.hex2dec(i1) << std::endl;

  int a = 0x7D;
  std::cout << "Int:" << std::hex << std::uppercase << a << "h"
            << "\tBin:" << base.int2bin(a) << "b" << std::endl;

  // int v[16] = {0x45, 0x4D, 0x42, 0x52, 0x49, 0x4F, 0x4E, 0x49,
  //              0x58, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20};
  // char* v1[16]{0};
  // v1 = base.intarr2chararr(v, 16);
  // cout << "vendor:" << v1 << endl;
  int a1{1}, b1{2};
  int x = base.sum<int>(a1, b1);
  std::cout << "Sum:" << x;
  return 0;
}
