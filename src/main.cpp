#include "baseConversion.h"
#include <sstream>
using namespace std;

void reverse(char str[], int length);
char *itoa(int num, char *str, int base);
unsigned long long hex2dec(const string &input);
unsigned long long dec2hex(const int &input);

int main() {
  BaseConversion base;

  char str[100];
  int pNumber{1567};
  int nNumber{-1567};
  cout << "Int:" << pNumber << "\tDec Str:" << base.itoa(pNumber, str, 10)
       << endl;
  cout << "Int:" << nNumber << "\tDec Str:" << base.itoa(nNumber, str, 10)
       << endl;
  cout << "Int:" << pNumber << "\tBin Str:" << base.itoa(pNumber, str, 2) << "b"
       << endl;
  cout << "Int:" << pNumber << "\tOct Str:" << base.itoa(pNumber, str, 8)
       << endl;
  cout << "Int:" << pNumber << "\tHex Str:" << base.itoa(pNumber, str, 16)
       << "h" << endl;

  string i1 = "7D";
  cout << "Hex Str:" << i1 << "h"
       << "\tDec Str:" << base.hex2dec(i1) << endl;

  int a = 0x7D;
  cout << "Int:" << std::hex << uppercase << a << "h"
       << "\tBin:" << base.int2bin(a) << "b" << endl;

  // int v[16] = {0x45, 0x4D, 0x42, 0x52, 0x49, 0x4F, 0x4E, 0x49,
  //              0x58, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20};
  // char* v1[16]{0};
  // v1 = base.intarr2chararr(v, 16);
  // cout << "vendor:" << v1 << endl;

  return 0;
}
