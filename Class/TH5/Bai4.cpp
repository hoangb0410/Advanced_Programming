#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n,m,a[100][100];
vector<string> res;
bool check=false;
void init()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>a[i][j];
    res.clear();
    check=false;
}
void Try(int i, int j,string s)
{
    if (i==1 && j==1 && a[i][j]==1)
    {
        check=false;
        return;
    }
    if (i==n && j==m && a[n][m]==0)
    {
        res.push_back(s);
        check=true;
        return;
    }  
    if (i<n && a[i+1][j]==0)
        Try(i+1,j,s+"D");
    if (j<m && a[i][j+1]==0)
        Try(i,j+1,s+"R");
}
int main()
{
    init();
    Try(1,1,"");
    if (!check)
        cout<<-1;
    else
    {
        sort(res.begin(),res.end());
        for (int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
    }
    return 0;
}