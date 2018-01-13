#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int i, j;
  int count = 1;
  while (n > 0) {
    n -= count;
    count++;
  }
  // cout << n << endl;
  // cout << count << endl;
  if(n < 0){
    n += count;
    if(count % 2 == 1) {  // 奇数 - 单增
      j = n;
      i = count + 1 - n;
    }
    if(count % 2 == 0) {   // 偶数-单减
      j = count - n + 1;
      i = n;
    }
  }
  if(n == 0) {
    count--;
    j = count;
    i = 1;
  }

  cout << i << "/" << j << endl;
  return 0;
}
