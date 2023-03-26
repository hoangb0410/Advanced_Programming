#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool kt=true;
    for (int i=0;i<s.size();i++)
    {   
        if (!isalpha(s[i])&&!isdigit(s[i]))
            {
                cout<<"Invalid username.";
                exit(0);
            }
    }
    if (s.size()<6 || s.size()>15)
            {
                cout<<"Invalid username.";
                exit(0);
            }
    if (isdigit(s[0])==false)
        cout<<"Valid username.";
    else cout<<"Invalid username.";
    return 0;
}