#include <iostream>
using namespace std;
const int Nmax =100;
int main()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    int A[Nmax][Nmax];
    for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
    {
        cin>>A[i][j];
        if (i==j)
            sum1=sum1+A[i][j];
        if (j==n-i-1)
            sum2=sum2+A[i][j];
    }    
    cout<<sum1-sum2;
    return 0;
}