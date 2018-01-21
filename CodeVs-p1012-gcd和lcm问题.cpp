#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(int argc, char const *argv[]) {
  int a, b;
  cin >> a >> b;
  int i = 1, j, count = 0;
  int max = a > b ? a : b;
  int min = max == a ? b : a;
  if(max % min != 0) {
    cout << 0 << endl;
  }
  else {
    int s = max / min;
    while (i * i < s ) {
      if(s % i != 0) {
        i++;
      }
      if(s % i == 0){
        j = s / i;
        if(gcd(i, j) == 1)
          count++;
        i++;
      }
    }
    cout << 2 * count << endl;
  }
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
