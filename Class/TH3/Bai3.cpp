#include <iostream>
#include <cmath> 
using namespace std; 
int main()
{
	long long a,n,m, r, result;
    cin>>a>>n>>m;
	result = 1;
	r = a % m;
	while (n > 0)
	{
		if(n & 1)
			result = (result * r) % m;
		r = (r * r) %m;
		n >>= 1;
	}
	cout <<result;
	return 0;
}