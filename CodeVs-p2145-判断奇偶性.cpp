#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;
  int n = s.size();
  if((s[n-1]-'0') & 1 == 1)
    cout << "ji" << endl;
  else
    cout << "ou" << endl;
  return 0;
}
