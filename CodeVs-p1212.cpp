#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(int argc, char const *argv[]) {
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;

  return 0;
}

int gcd(int a, int b) {
  int max = a>b ? a:b;
  int min = max == a ? b:a;
  if(min == 0)
    return max;
  else
    return gcd(min, max%min);
}
