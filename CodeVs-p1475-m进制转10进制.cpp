#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int Pow(int base, int exp) {
  int res = base;     // 这里是没有给base进行初始化的锅
  if(exp == 0)
    return 1;
  if(exp == 1)
    return base;
  for(int i = 1; i < exp; ++i) { // n > = 3
    res *= base;
  }
  return res;
}

int CharToInt(const char src) {
  if (src > 47 && src < 58)
    return src - 48;  //0-9
  if (toupper(src) > 64 && toupper(src) < 91)
    return toupper(src) - 55;  //A-Z;a-z
  return -1;  //error
}

void StrToInt(string s, int str[]) {
  for(int i = 0; i < s.size(); ++i) {
    str[i] = CharToInt((char)s[i]);
  }
}

int BaseConvertToDec(string s, int base) {
  int n = s.size();
  // cout << "n = " << n << endl;
  int str[n];
  StrToInt(s, str);
  // cout << "to INT" << endl;
  // for(int i = 0; i < n; ++i){
  //   cout << str[i] << endl;
  // }

  int sum = 0;
  for(int j = n-1; j >=0; --j) {
    // cout << str[j] << endl;
    sum += str[j] * Pow(base, n-1-j);
    // cout << "sum = " << sum << endl;
  }
  return sum;
}


int main(int argc, char const *argv[]) {
  /* 测试Pow()函数 */
  // int i = 5, j = 2;
  // cout << Pow(i, j) << endl;

  /* 测试CharToInt()函数 */
  // string s;
  // cin >> s;
  // cout << CharToInt(s[0]) << endl;

  /* 测试StrToInt()函数*/
  // string s;
  // cin >> s;
  // int n = s.size();
  // int str[n];
  // StrToInt(s, str);
  // for(int i = 0; i < n; ++i)
  //   cout << str[i] << endl;

  string s;
  int base;
  cin >> s >> base;
  cout << BaseConvertToDec(s, base) << endl;

  return 0;
}
