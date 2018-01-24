#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

template <typename T, typename Func>
void SelectionSort (T data[], int size, Func f);

bool cmp(double a, double b)
{ return a > b; }   // 降序

int main(int argc, char const *argv[]) {
  int n, k;
  cin >> n >> k;
  double data[n][2], gpa[n];
  for(int i =0; i < n; ++i) {
    cin >> data[i][0] >> data[i][1];
    gpa[i] = data[i][0] / data[i][1];
  }
  SelectionSort(gpa, n, cmp);
  printf("%.2f\n", gpa[k-1]);
  return 0;
}



template <typename T, typename Func>
void SelectionSort (T data[], int size, Func f)
{
	int i,j,k;
	for (i=0; i<size-1; ++i)
	{
		k=i;
		for (j=i+1; j<size; ++j)
		{
			if (f(data[j],data[k]))
				k=j;
		}
		std::swap(data[i], data[k]);
	}
}
