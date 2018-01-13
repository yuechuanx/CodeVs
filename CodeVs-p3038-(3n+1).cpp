#include <iostream>
using namespace std;

int compute(int a);

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; ++i){
    cin >> a[i];
  }
  for(int i=0; i<n; ++i){
    cout << compute(a[i]) << endl;
  }

  return 0;
}

int compute(int a) {
  int count;
  if(a == 1) return count;
  while (a != 1) {
    if(a%2 == 1) {
      a = 3*a+1;
      count++;
    }
    else if(a%2 == 0){
      a = a/2;
      count++;
    }
  }
  return count;

}
