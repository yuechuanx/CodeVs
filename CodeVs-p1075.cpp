#include <iostream>
using namespace std;

template <typename DateType>
void insertSort(DateType d[], int length);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i) {
        int j = i+1;
        while(j < n) {
            if(a[i] == a[j]) {      // 把前面重复的元素删除掉，后面元素补上
                n--;
                for(int k = j; k < n; ++k) {
                    a[k] = a[k+1];
                }
                i--;    // i--用来保证所有元素都被校检到
            }
            j++;
        }
    }
    insertSort(a, n);
    cout << n << endl;
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

template <typename DateType>
void insertSort(DateType d[], int length) {
  DateType key;
  for(int j = 1; j < length; j++){
    key = d[j];     // 将待排元素放在临时变量key中
    int i = j - 1 ;
    while (i>=0 && key < d[i]) {     // 循环查找待排元素的位置
      d[i+1] = d[i];      // 将大于待排元素的值向后移位
      i--;      // 下标变量-1
    }
    d[i+1] = key;     // 将待排元素插入到i+1位置
  }
}
