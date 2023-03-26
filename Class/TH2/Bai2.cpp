#include <iostream>
using namespace std;
bool compareArray(int a[], int b[], int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]!=b[i])
            {
                return false;
                break;
            }
        else dem++;
    }
    if (dem==n)
        return true;
}
int main()
{
    int a[]={1,2,3,4,5},b[]={1,2,3,4,4};
    cout << boolalpha << compareArray(a, b, 5);
    return 0;
}