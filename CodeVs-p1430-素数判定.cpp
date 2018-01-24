#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    cin >> n;
    if(isPrime(n))
      cout << "\\t" << endl;
    else
      cout << "\\n" << endl;
    return 0;
}

bool isPrime(int n) {
  if(n == 1) return false;
  if(n == 2) return true;
  for(int i = 2; i < sqrt(n); ++i) {
    if(n % i == 0)
      return false;
  }
  return true;
}
