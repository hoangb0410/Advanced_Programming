#include <iostream>
using namespace std;
const int Nmax=1000000; 
int main()
{
    int n;
    int a[Nmax],b[Nmax];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        cin>>b[i];
    bool kt=true;
    for (int i=0;i<n;i++)
    {
        if (a[i]!=b[i])
            kt=false;
    }
    if (kt==true)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}