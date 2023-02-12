#include <iostream>
using namespace std;
int main()
{
    char s[] = "12345";
    char* p = s;
    char** pp = &p;
    cout<<&pp<<" "<<&p<<endl;
    cout<<&s<<endl;
    cout<<&s[3]<<endl;
    return 0;
}