#include <iostream>
using namespace std;
int computeGcd(int a, int b)
{
    if (b==0)
        return a;
    return computeGcd(b,a%b);
}
int sumRelativePrime(int n)
{
    int sum=0;
    for (int i=1;i<n;i++)
    {
        if (computeGcd(i,n)==1)
        sum=sum+i;
    }
    return sum;
}
int main()
{
    cout << sumRelativePrime(10);
    return 0;
}