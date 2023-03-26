#include <iostream>
using namespace std;
const int Nmax =100;
int UCLN(int a, int b)
{
    if (b == 0) return a;
    if (a % b == 0) return b;
    return UCLN(b, a%b);
}
int main()
{
    int n;
    cin>>n;
    int num=0,den=1,uoc;
    int tu[Nmax],mau[Nmax];
    for (int i=0;i<n;i++)
    {
        cin>>tu[i]>>mau[i];
        num=num*mau[i]+tu[i]*den;
        den=den*mau[i];
        uoc=UCLN(num,den);
        num=num/uoc;
        den=den/uoc;
    }    
    if (den==1)
        cout<<num;
    else
        cout<<num<<"/"<<den;
    return 0;
}