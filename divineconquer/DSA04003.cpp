#include<bits/stdc++.h>

using namespace std;

int mod=123456789;

long long power(long long x, long long y)
{
    long long temp;
    if (y == 0)
        return 1;
    if(y==1) return x;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return (temp * temp)%mod;
    else
        return (((temp * temp)%mod)*x)%mod;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout <<	power(2, n-1)%mod << endl;
	}
}