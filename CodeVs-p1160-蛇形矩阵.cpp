#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, sum = 0;
  cin >> n;
  int a[n][n];
  // 生成矩阵
  int x, y;
  x = y  = n / 2; // 矩阵下标从0开始
  a[x][y] = 1;
  // cout << x << y << endl;
  // cout << a[1][1] << endl;
  // a[x][y+1] = a[x][y] +1;
  // y++;
  // cout << a[1][2] << endl;
  // cout << y << endl;
  // for(int i = 1; i > 0; --i) {
  //   cout << i << endl;
  // }
  for(int i = 1; i < n; ++i) {
    if(i % 2 == 1) {
      for(int j = i; j > 0; --j) {
        a[x][y+1] = a[x][y] + 1;
        y++;
      } // 向右++
      for(int k = i; k > 0; --k) {
        a[x-1][y] = a[x][y] + 1;
        x--;
      }// 向上++
    }
    if(i % 2 == 0) {
      for(int j = i; j > 0; --j) {
        a[x][y-1] = a[x][y] + 1;
        y--;
      }// 向左

      for(int k = i; k > 0; --k) {
        a[x+1][y] = a[x][y] + 1;
        x++;
      }// 向下

    }

  }
  for(int i = 1; i < n; ++i) {
    a[x][y+1] = a[x][y] + 1;
    y++;
  } // 向右++
  // 计算对角线和
  for(int i = 0, j = n -1 ; i < n && j >=0; ++i, --j) {
    sum += a[i][i];
    sum += a[i][j];
  }
  // 输出矩阵
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << sum-1 << endl;
  return 0;
}
