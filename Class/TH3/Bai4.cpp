#include <iostream>
using namespace std;
const int Nmax = 100000;
int binarySearch(int arr[], int left, int right, int x)
{
    if (right>=left)
    {
        int mid =(left + right) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        else return binarySearch(arr, mid+1, right, x);
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[Nmax];
    for (int i=0;i<n;i++)
        cin>>a[i];
    if (n==1)
    {
        if (x==a[0])
            cout<<"YES";
        else cout<<"NO";
    }
    else
    {
        int result = binarySearch(a,0,n-1,x);
        if (result==-1)
            cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}