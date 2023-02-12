#include <iostream>
using namespace std;
const int nmax=10000;
int main()
{
    int n,a,b;
    cin>>n;
    int hang[nmax],cot[nmax],d1[nmax],d2[nmax];
    for (int i=1;i<=n;i++)
    {
        cin>>a>>b;
        hang[a]+=1;
        cot[b]+=1;
        d1[a-b+n]+=1;
        d2[a+b-1]+=1;
    }
    bool check=true;
    for (int i=1;i<=n;i++)
    {
        if (hang[i]>1||cot[i]>1||d1[i]>1||d2[i]>1)
        {
            check=false;
            break;
        }
    }
    if (check==true)
        cout<<"no";
    else 
        cout<<"yes";
    return 0;
}