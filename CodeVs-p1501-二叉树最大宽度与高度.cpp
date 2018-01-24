#include <iostream>
using namespace std;

int width[10], tree[20][2];  // tree 用来存储输入的数据
int layernum, widthnum;


void dfs(int i, int layer) {//i是节点的编号
    width[layer]++;//每多一个节点，对应层数的宽度加1
    if(layer > layernum) layernum = layer;//判断层数的最大值
    if(tree[i][0] != 0) dfs(tree[i][0], layer + 1);
    if(tree[i][1] != 0) dfs(tree[i][1], layer + 1);
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> tree[i][0] >> tree[i][1];
    }
    layernum = 0;
    dfs(1, 1);
    for(int i = 1; i <= n; i++) {
        if(width[i] > widthnum) widthnum = width[i];
    }
    cout << widthnum << " " << layernum;
    return 0;
}
