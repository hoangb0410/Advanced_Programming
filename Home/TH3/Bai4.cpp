#include <iostream>
#include <iomanip>
using namespace std;
const int Nmax = 1000;
int main()
{
    int n,cs;
    cin>>n;
    float a[Nmax],x;
    for (int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;
    for (int i=0;i<n;i++)
        if (x<a[i])
        {
            cs=i;
            break;
        }
    n++;
    for (int i=n-1;i>=cs;i-- )
        a[i]=a[i-1];
    a[cs]=x;
    for (int i=0;i<n;i++)
    cout << fixed << setprecision(2) <<a[i]<<" ";
    return 0;
}
