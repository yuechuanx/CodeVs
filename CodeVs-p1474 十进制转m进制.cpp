#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, m;
  int s[20];
  int count = 0;
  cin >> n >> m;
  while (n != 0) {
    s[count] = n % m;
    n = n / m;
    count++;
  }
  for(int i = count-1; i >= 0; --i) {
    if(s[i] < 10)
      cout << s[i];
    if(s[i] >= 10)
      cout << (char)(s[i]+55);
  }
  cout << endl;
  return 0;
}
