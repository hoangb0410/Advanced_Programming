#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int trungvi(int a[], int n)
{
    for (int i=1;i<n;i++)
        for (int j=i+1;j<=n;j++)
            if (a[j]<a[i])
                swap(a[i],a[j]);
    if (n%2!=0)
        return a[n/2+1];
    else
    {   int temp=a[n/2]+a[n/2+1];
        float result=float(temp)/2;
        return result;
    }
}
int main()
{
    ifstream ifs("1.txt");
    int n=0;
    int A[1000];
    A[0]=0;
    if(!ifs)
        return 1;
    int num;
    while(ifs  >> num)
    { 
        n++;
        A[n]=num;
    }
    cout<<trungvi(A,n);
    ifs.close();
    return 0;
}