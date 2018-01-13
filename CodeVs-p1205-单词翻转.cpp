#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
  string str;
  getline(cin, str);
  int len, i, j;
  len = str.size();
  j = len;
  i = len - 1;
  while (i--) {
    if(str[i] == ' ') {
      for(int k = i+1; k < j; k++) {
        cout << str[k];
      }
      cout << " ";
      j = i;
    }
  }
  for(int m = 0; m < j; m++) {
    cout << str[m];
  }

  return 0;
}

// #include <iostream>
// #include <stdio.h>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char s[1001]={0};
//     gets(s);
//     int len,k;
//     len=strlen(s);
//     k=len;
//     int i=len-1;
//     while(i--)
//     {
//         if(s[i]==' ')
//         {
//             for(int j=i+1;j<k;j++)
//             {
//                 cout<<s[j];
//             }
//             cout<<" ";//这里别忘记
//             k=i;
//         }
//
//     }
//     for(int m=0;m<k;m++)
//         cout<<s[m];
//     cout<<endl;
//     return 0;
// }
