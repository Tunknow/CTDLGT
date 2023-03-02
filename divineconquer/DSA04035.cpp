#include<bits/stdc++.h>

using namespace std;

int mod=1000000007;

long long power(long long a, long long b)
{
	if(b==0) return 1;
	else if(b%2==0) return (power(a,b/2)*power(a,b/2))%mod;
	else return (((power(a,b/2)*power(a,b/2))%mod)*a)%mod;
}

int main()
{
	long long a, b;
	while(1) {
		cin >> a >> b;
		if(a==0 && b==0) break;
		cout << power(a, b) << endl;
	}
}