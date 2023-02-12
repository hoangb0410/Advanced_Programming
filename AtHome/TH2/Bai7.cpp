#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double giaiThua(double n)
{
    if ((n == 1) || (n==0))
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int x;
    double sum=1, oldSum=0;
    cin>>x;
    int i=1;
    while (sum - oldSum > 0.001)
    {
        oldSum=sum;
        sum=sum+ pow(x,i)/giaiThua(i);
        i++;
    }
    cout << fixed << setprecision(4) << sum;
    return 0;
}