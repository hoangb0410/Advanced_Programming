#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int countStartSpaces=0;
    for (int i=0;i<s.size();i++)
        if (s[i]==' ')
            {
                countStartSpaces++;
                cout<<' ';
            }
        else break;   
    for (int i=countStartSpaces;i<s.size();i++)
    {
        if (s[i]!=' ')
            cout<<s[i];
        else 
        {
            cout<<' ';
            while (s[i]==' ')
                {i++;}
            i--;
        }
    }
    return 0;
}