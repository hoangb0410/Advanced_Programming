#include <iostream>
using namespace std;
const int Nmax =10000;
int xh(string a, char x)
{
    bool kt=false;
    int index;
    for (int i=0;i<a.length();i++)
        if (x==a[i])
        {
            kt=true;
            index=i;
            break;
        }
    if (kt==true)
        return index;
    else 
        return -1;
}
int main()
{
    int n;
    cin>>n;
    string A[Nmax];
    char cs[Nmax];
    for (int i=0;i<n;i++)
        cin>>A[i]>>cs[i];
    for (int i=0;i<n;i++)
    {
        cout<<xh(A[i],cs[i])<<endl;
    }
    return 0;
}