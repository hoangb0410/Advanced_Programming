#include <iostream>
using namespace std;
int UCLN(int a, int b)
{  
    if (b==0)
        return a;
    return UCLN(b,a%b);
}
int main()
{
    int tu,mau;
    cin>>tu>>mau;
    int tu1= abs(tu);
    int mau1=abs(mau);
    int temp=UCLN(tu1,mau1);
    tu=tu/temp;
    mau=mau/temp;
    if (mau==1||mau==-1||tu==0)
    {
         
         if (mau<0)
            cout<<-tu;
         else cout<<tu;
    }
    else
    {
        if (mau<0)
        {
            mau=abs(mau);
            if (tu<0)
            {
                tu=abs(tu);
                cout<<tu<<"/"<<mau;
            }
            else
                cout<<-tu<<"/"<<mau;
        }
        else
            cout<<tu<<"/"<<mau;
    }
    return 0;
}