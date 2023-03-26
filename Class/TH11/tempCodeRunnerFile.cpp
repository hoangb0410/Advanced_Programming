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
    if (n==0)
    {
        cout<<-1<<endl;
        cout<<-1;
    }    
    else
    {
        for (int i=0;i<n;i++)
            cout<<s[i]<<" ";
        cout<<endl;
        float mean=(float)sum/n;
        for (int i=0;i<n-1;i++)
            for (int j=i+1;j<n;j++)
                if (s[i]>s[j])
                    swap(s[i],s[j]);
        int dem=0;
        for (int i=0;i<n;i++)
            if ((s[i]%2==0)&&(s[i]>=mean))
            {
                a[dem]=s[i];
                dem++;
            } 
        if (dem==0)
            cout<<"-1";
        else
        for (int i=0;i<dem;i++)
            cout<<a[i]<<" ";
    }        
    return 0;
} 
