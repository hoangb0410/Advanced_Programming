#include <iostream>
using namespace std;
const int MAX_N = 1000;
int main()
{
    int n;
    cin>>n;
    int a[MAX_N];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<a[0]<<" ";
    for (int i=1;i<n;i++)
    {
        bool kt=true;
        for (int j=0;j<i;j++)
            if (a[j]==a[i])
                kt=false;
        if (kt==true)
            cout<<a[i]<<" ";
    }
    return 0;
}