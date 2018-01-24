#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
  if(n == 1) return false;
  if(n == 2) return true;
  for(int i = 2; i <= sqrt(n); ++i) {
    if(n % i == 0)
      return false;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int L, R, cnt = 0;
  cin >> L >> R;
  for(int i = L+1; i < R; ++i) {
    if(isPrime(i))
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}
