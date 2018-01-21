#include <cstdio>
using namespace std;
int n, l[100], r[100], tot, s1[100], s2[100], s3[100];
void dfs(int x)
{
    s1[++s1[0]]=x;
    if(l[x])dfs(l[x]);
    s2[++s2[0]]=x;
    if(r[x])dfs(r[x]);
    s3[++s3[0]]=x;
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)scanf("%d%d",&l[i],&r[i]);
    dfs(1);
    for(i=1;i<=n;i++)printf("%d ",s1[i]);printf("\n");
    for(i=1;i<=n;i++)printf("%d ",s2[i]);printf("\n");
    for(i=1;i<=n;i++)printf("%d ",s3[i]);printf("\n");
    return 0;
}
