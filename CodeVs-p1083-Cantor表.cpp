#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int i, j;
  int count = 1;
  while (s > n) {   // 确定n所出在的组数，由于执行顺序，可能有两种情况：
    s += count;     // 1. n < 0 说明count组数正确
    count++;        // 2. n = 0 count 需要 --
  }
  // cout << n << endl;
  // cout << count << endl;
  n += count;
  cout << count << endl;
  if(n == 0) {
    count--;
    n++;
  }
  if(count % 2 == 1) {  // 奇数 - 单增
    j = n;
    i = count + 1 - n;
  }
  if(count % 2 == 0) {   // 偶数-单减
    j = count - n + 1;
    i = n;
  }
  cout << i << "/" << j << endl;
  return 0;
}
