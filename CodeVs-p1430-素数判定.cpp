#include <iostream>
using namespace std;
int main()
{
    int a;
    int flag = 1;
    cin >> a;
    for(int i = 2; i < a/2; i++){
        if(a % i == 0)
            flag = 0;
    }
    if(flag == 0)
      cout << "\\n" << endl;
    if(flag == 1)
      cout << "\\t" << endl;
    return 0;
}
