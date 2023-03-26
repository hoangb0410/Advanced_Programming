#include <iostream>
using namespace std;
int i=-1;
const int Nmax=10000;
void hoanvi(string a, int l, int r, string arr[])
{
	if (l == r)
    {
        bool kt=true;
        for (int h=0;h<=i;h++)
            if (arr[h]==a)
                kt=false;
        if (kt==true)
        {
            i++;
            arr[i]=a;
        }
        else
            for (int i = l; i <= r; i++)
            {
                // doi cho
                swap(a[l], a[i]);
                // goi de quy
                hoanvi(a, l+1, r,arr);
                //quay lui
                swap(a[l], a[i]);
            }
    }
	else
	{
		for (int i = l; i <= r; i++)
		{
			// doi cho
			swap(a[l], a[i]);
			// goi de quy
			hoanvi(a, l+1, r,arr);
			//quay lui
			swap(a[l], a[i]);
		}
	}
}
int main()
{
    int m,n;
    cin>>n>>m;
    string str="";
    for (int i=0;i<n;i++)
        str=str+"0";
    for (int i=n;i<m+n;i++)
        str=str+"1";    
    string arr[Nmax];
	int l = str.length();
	hoanvi(str, 0, l-1,arr);
    for (int j=0;j<i;j++)
    for (int k=j+1;k<=i;k++)
        if (arr[k]<arr[j])
            swap(arr[k],arr[j]);  
    for (int m=0;m<=i;m++)
        cout<<arr[m]<<endl;
	return 0;
}
