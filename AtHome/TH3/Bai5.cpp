#include <iostream>
using namespace std;
const int Nmax = 100000;
int main()
{
    int n;
    cin>>n;
    int a[Nmax];
    for (int i=0;i<n;i++)
        cin>>a[i];
    bool kt=true;
    for (int i=0;i<n;i++)
        if(a[i]!=a[n-1-i])
            kt=false;
    if (kt==true)
        cout<<"Symmetric array.";
    else
        cout<<"Asymmetric array.";
    return 0;
}