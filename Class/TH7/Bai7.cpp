#include <iostream>
using namespace std;
int main()
{
    int a; 
    int& p = a;
    cout<<a<<" "<<p<<" "<<&p<<endl;
    return 0;
}