#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int a[n];
  a[0] = 1; a[1] = 1;
  for(int i = 2; i < n; ++i) {
    a[i] = a[i-1] + a[i-2];
  }

  cout << a[n-1] << endl;

  return 0;
}
