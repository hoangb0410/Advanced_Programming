#include <iostream>
#include <sstream>
#include <string>
using namespace std;
long long convertDecimalToBinary(int number)
{
    long long temp,sum=0,i=1;
    do
    {
        temp=number%2;
        sum=sum+i*temp;
        number=number/2;
        i=i*10;
    } while (number>0);
    return sum;
}
int main()
{
    long long number;
    cout<<convertDecimalToBinary(5000);
    return 0;
}