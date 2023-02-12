#include <iostream>
using namespace std;
string convert(string text)
{
    for (int i=0;i<text.length();i++)
    {
        if (i%2==0)
            if ((int(text[i]>=97))&&(int(text[i])<=122)) //in thuong
                text[i]=char(int(text[i])-32);
        if (i%2!=0)
            if ((int(text[i]>=65))&&(int(text[i])<=90)) //in hoa
                text[i]=char(int(text[i])+32);
    }        
    return text;
}
int main()
{
    cout<<convert("uQZufBIiahJBTVgFo");
    return 0;
}