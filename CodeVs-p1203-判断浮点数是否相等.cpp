#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  double a, b;
  double min, max;
  cin >> a >> b;
  if(a-b > 0){
    max = a;
    min = b;
  } else {
    max = b;
    min = a;
  }
  if(max -min < 0.00000001) {
    cout << "yes" << endl;
  }
  else {
    cout << "no" <<endl;
  }
  return 0;
}
