#include<bits/stdc++.h>
#define ll long long

using namespace std;

int mod=1e9+7;

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
		ll n;
		cin >> n;
		ll k=n;
		long long r=0;
		int c;
		while(k!=0) {
			c=k%10;
			r=r*10+c;
			k/=10;
		}
		cout << r << endl;
		//cout << power(n, r) << endl;
	}
}
