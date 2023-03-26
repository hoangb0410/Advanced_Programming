#include <iostream>
using namespace std;
int main()
{
    char s[] = "12345";
    char* p = s;
    char** pp = &p;
    //cout<<&pp<<endl;
    //cout<<&s[4]<<endl;
    //cout<<*(*pp+2)<<endl;
    //cout<<**pp<<endl;
    cout<<s[4]+1<<endl;
    //cout<<p<<endl;
    //cout<<*(p+3)<<endl;
    cout<<pp<<endl;
    return 0;
}