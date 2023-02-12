#include <iostream>
using namespace std;
int computeGcd(int a, int b)
{  
    if (b==0)
        return a;
    return computeGcd(b,a%b);
}
int main()
{
    cout << computeGcd(4, 6);
    return 0;
}