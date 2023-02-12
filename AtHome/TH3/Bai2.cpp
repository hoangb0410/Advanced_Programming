#include <iostream>
#include <iomanip>
using namespace std;
const int Nmax =100000;
int main()
{
    int n;
    cin>>n;
    float a[Nmax];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
    for (int j=i+1;j<n;j++)
        if (a[i]<a[j])
            {
                float temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    for (int i=0;i<n;i++)
        cout << fixed << setprecision(2) <<a[i]<<" ";
    return 0;
}