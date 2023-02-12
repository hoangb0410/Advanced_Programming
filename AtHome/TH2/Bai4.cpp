#include <iostream>
using namespace std;
int main()
{
    long long total,totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    long long numChicken;
    for (numChicken=1;numChicken<=totalLegs/2;numChicken++)
    {
        if (numChicken*2+(total-numChicken)*4 == totalLegs)
            {
                flag=true;
                break;
            }
    }
    if (flag == false)
        cout<<"invalid";
    else
        cout<<"chicken = "<<numChicken<<", dog = "<<total-numChicken;
    return 0;
}