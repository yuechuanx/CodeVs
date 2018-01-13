#include <iostream>
using namespace std;

int main()
{
    int price;
    float discount;
    cin >> price >> discount;
    int cost = price * discount / 10;
    int error = cost % 10;
    if(error >= 5)
      cost = cost + 10 -error;
    else
      cost = cost - error;
    cout << cost << endl;
    return 0;
}
