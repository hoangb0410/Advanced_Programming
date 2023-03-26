#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    char str[1000000];
    int s[1000],a[1000];
    cin>>str;
    int n=0;
    char *p, *q;
    p=str;
    int num,sum=0; 
    while(q=strtok(p,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"))
    {
        p=NULL;
        num=atoi(q);
        sum+=num;
        s[n]=num;
        n++;
    }
    cout<<sum;
    return 0;
} 
