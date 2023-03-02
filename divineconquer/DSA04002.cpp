#include<bits/stdc++.h>
#define ll long long

using namespace std;

int mod=1e9+7;

ll ex(ll a, ll b)
{
	if(b==0) return 1;
	if(b==1) return a;
	if(b%2==0) return (ex(a, b/2)*ex(a,b/2))%mod;
	else return (((ex(a,b/2)*ex(a,b/2))%mod)*a)%mod;
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
		//cout << r << endl;
		cout << ex(n, r) << endl;
	}
}
