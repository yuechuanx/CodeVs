#include<cstdio>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;

struct comp{
    bool operator()(int x, int y){
        return x>y;
    }
};
priority_queue<int,vector<int>,comp> a;
int n,x;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        a.push(x);
    }
    for(int i=1;i<=n;i++){
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
    return 0;
}
