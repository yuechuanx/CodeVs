#include <iostream>
using namespace std;

int Compute(int n);

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  cout << Compute(n) << endl;
  return 0;
}

int Compute(int n) {
  int res = 0;
  if(n == 1) {
    return 1;
  }
  else if(n == 2) {
    return 2;
  }
  else {
    for(int i = 1; i <= n / 2; ++i) {
      res += Compute(i);
    }
  }
  return res+1;
}
