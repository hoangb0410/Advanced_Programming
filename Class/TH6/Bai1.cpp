#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    ifstream ifs("1.txt");
    int n=-1;
    int A[1000];
    if(!ifs)
        return 1;
    int num;
    while(ifs  >> num)
    { 
        n++;
        A[n]=num;
    }
    int nummax=A[0],nummin=A[0],sum=A[0];
    for (int i=1;i<=n;i++)
    {
        if (A[i]>nummax)
            nummax=A[i];
        if (A[i]<nummin)
            nummin=A[i];
        sum=sum+A[i];
    }
    ifs.close();
    cout<<n+1<<" "<<nummin<<" "<<nummax<<" "<<sum;
    return 0;
}