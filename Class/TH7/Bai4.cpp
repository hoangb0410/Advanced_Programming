#include <iostream>
using namespace std;
int main()
{
    int a[3]={2, 3};
    int* p=a;
    int** pp=&p;
    cout<<*(a+1)<<endl;
    return 0;
}