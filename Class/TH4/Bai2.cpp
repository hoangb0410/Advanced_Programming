#include <iostream>
using namespace std;
const int Nmax=10000;
string sort(string s)
{
    for (int i=0;i<s.length()-1;i++)
        for (int j=i+1;j<s.length();j++)
            if (s[j]<s[i])
                swap(s[i],s[j]);
    int k=0;
    string result="";
    while (s[k]=='0')
        k++;
    for (k;k<s.length();k++)
        result=result+s[k];
    return result;
}
int main()
{
    int n;
    string a[Nmax];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
    {
        cout<<sort(a[i])<<endl;
    }
    return 0;
}