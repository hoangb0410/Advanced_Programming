#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_N = 1000;
int main()
{
    int n;
    cin>>n;
    double arrayX[MAX_N];
    double sum = 0;
    for (int i=0;i<n;i++)
    {
        cin>>arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum/n;
    double var=0;
    for (int i=0;i<n;i++)
    {
        var=var+(arrayX[i]-mean)*(arrayX[i]-mean);
    }
    cout << fixed << setprecision(2) <<var/n;
    return 0;
}