#include <iostream>
using namespace std;

int compute(int a);

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  cout << compute(n) << endl;
  return 0;
}

int compute(int a) {
  if(a >= 0) {
    return 5;
  } else {
    return compute(a+1) + compute(a+2) + 1;
  }
}
