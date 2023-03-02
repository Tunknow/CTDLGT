#include<bits/stdc++.h>

using namespace std;

int mod=1000000007;

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
		int n, k;
		cin >> n >> k;
		cout <<	power(n, k)%mod << endl;
	}
}