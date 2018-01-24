#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a, b;
  cout << "Enter the speed limit: ";
  cin >> a;
  cout << "Enter the recorded speed of the car: ";
  cin >> b;
  if(a > b)
    cout << "Congratulations, you are within the speed limit" << endl;
  else if(b-a <= 20)
    cout << "You are speeding and your fine is $ 100" << endl;
  else if(b-a <= 30)
    cout << "You are speeding and your fine is $ 270" << endl;
  else
    cout << "You are speeding and your fine is $ 500" << endl;
  return 0;
}
