#include <iostream>
using namespace std;

int Factorial(int n);

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  cout << Factorial(n) << endl;
  return 0;
}

int Factorial(int n) {
  if(n == 1) return 1;
  else
    return n * Factorial(n-1);
}
