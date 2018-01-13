#include <iostream>
using namespace std;

void hanoiTowerPrint(int num, char from, char mid, char to);
int hanoiTower(int n);
int count = 0;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  cout << hanoiTower(n) << endl;
  hanoiTowerPrint(n, 'A', 'B', 'C');
  return 0;
}

int hanoiTower(int n) {
  if(n == 1)
    return 1;
  else {
    return hanoiTower(n-1) * 2 + 1;
  }
}

void hanoiTowerPrint(int num, char from, char mid, char to) {
  if(num == 1)
    cout << num << " from " << from << " to " << to << endl;
  else {
    hanoiTowerPrint(num - 1, from, to, mid);
    cout << num << " from " << from << " to " << to << endl;
    hanoiTowerPrint(num - 1, mid, from, to);
  }
}
