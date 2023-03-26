#include <iostream>
using namespace std;
const int Nmax=15;
int maxn(int a[],int n)
{
    int maxnum=a[0];
    if (n==1)
        return a[0];
    for (int i=1;i<n;i++)
        if (a[i]>maxnum)
            maxnum=a[i];
    return maxnum;
}
int minn(int a[],int n)
{
    int minnum=a[0];
    if (n==1)
        return a[0];
    for (int i=1;i<n;i++)
        if (a[i]<minnum)
            minnum=a[i];
    return minnum;
}
bool uoc(int a[],int n, int x)
{
    bool kt=true;
    for (int i=0;i<n;i++)
        if (a[i]%x !=0)
            kt=false;
    return kt;
}
bool boi(int a[],int n, int x)
{
    bool kt=true;
    for (int i=0;i<n;i++)
        if (x%a[i] !=0)
            kt=false;
    return kt;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[Nmax],b[Nmax];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<m;i++)
        cin>>b[i];
    int count=0;
    for (int i=maxn(a,n);i<=minn(b,m);i++)
    {
        if ((boi(a,n,i)==true)&&(uoc(b,m,i)==true))
            count++;          
    }
    cout<<count;
    return 0;
}