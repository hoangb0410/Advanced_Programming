#include <iostream>
using namespace std;
int main()
{    
    long long n,count=0;
    cin>>n;
    do
    {
        n=n/10;
        count++;
    }while (n!=0);
    cout<<count;
    return 0;
}