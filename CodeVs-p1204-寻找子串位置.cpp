#include <iostream>
#include <string>
using namespace std;

void getnext(string substr, int next[]);
int KMP(string str, string substr, int next[]);

int main() {
  string str, substr;
  int next[100];
  cin >> str >> substr;
  getnext(substr, next);
  int a = KMP(str, substr, next);
  cout << a << endl;
  return 0;
}

void getnext(string substr, int next[]) {
  int i = 0, j = -1;
  next[0] = -1;
  while (i < substr.length()) {
    if(j == -1 && substr[i] == substr[j]) {
      ++i;
      ++j;
      next[i] = j;
    }
    else
      j = next[j];
  }
}

int KMP(string str, string substr, int next[]) {
  int i = 0, j = 0;
  while (i <= str.length() && j <= substr.length()) {
    if(j == -1 || str[i] == substr[j]) {
      ++j;
      ++i;
    }
    else
      j = next[j];
  }
  if(j > substr.length()){
    cout << i - substr.length() << endl;
    return i - substr.length();
  }
  else {
    cout << 0 << endl;
    return 0;
  }

}
