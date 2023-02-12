#include <iostream>
#include <sstream>
#include <string>
using namespace std;
string convertDecimalToBinary(int number)
{
    long long temp,sum=0,i=1;
    long long temp1=number;
    if (number<0)
        number=-number;
    string result="";
    do
    {
        temp=number%2;
        number=number/2;
        ostringstream convert;
        convert << temp;
        string s = convert.str();
        result=s+result;
    } while (number>0);
    if (temp1<0)
        result="-"+result;
    return result;
}
int main()
{
    cout<< convertDecimalToBinary(118);
    return 0;
}