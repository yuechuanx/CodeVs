#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

char a[200],b[200];
int p[200];
int n,m;

void get () {
    int i=0,j=-1;
    p[0]=-1;
    while (i<m) {
        while (j>=0&&b[i]!=b[j]) j=p[j];
        i++;j++;
        p[i]=j;
    }
}
void find () {
    int i=0,j=0;
    while (i<n) {
        while (j>=0&&a[i]!=b[j]) j=p[j];
        i++;j++;
        if (j==m) {
            printf("%d",i-j+1);
            return ;
            //j=p[j]; 可以继续找下去
        }
    }
}

int main () {
    scanf("%s",a);scanf("%s",b);
    n=strlen(a);m=strlen(b);
    get();
    find();
    return 0;
}
