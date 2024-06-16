#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c&&a+c>b&&b+c>a)
    {
        double p=double(a+b+c)/2;
        double S=sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed << setprecision(2) <<S;
    }
    else
        cout<<"invalid";
    return 0;
}


