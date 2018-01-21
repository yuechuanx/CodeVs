#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int k;
  cin >> k;
  double sum = 0;
  int n = 1;
  while (sum <= k) {
    sum +=  1.0 / n;    // 这里的除法结果用浮点来表示
    n++;
  }
  cout << n-1 << endl;
  return 0;
}
