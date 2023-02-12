#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<int> listSquare(int a, int b)
{
    vector<int> result;
    int count=-1;
    int arr[10000];
    for (int i=a;i<=b;i++)
    {
        int temp=sqrt(i);
        if (temp*temp==i)
        {
            count++;
            arr[count]=i;
        }
    }
    for (int i=0;i<count;i++)
        for (int j=i+1;j<=count;j++)
            if (arr[j]<arr[i])
                swap(arr[i],arr[j]);
    for (int i=0;i<=count;i++)
        result.push_back(arr[i]);
    return result;
}
int main()
{
    vector<int> a = listSquare(2, 30);
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << " ";
    return 0;
}