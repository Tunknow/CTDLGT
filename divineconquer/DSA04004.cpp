#include<bits/stdc++.h>

using namespace std;

long long f[51];

int solve(int n, long long k)
{
	if(n==0) return 1;
	if(k==f[n]) return n+1;
	else if(k<f[n]) return solve(n-1, k);
	else return solve(n-1, k-f[n]);
}

int main()
{
	f[0]=1;
	f[1]=2;
	for(int i=2; i<=50; i++) f[i]=f[i-1]*2;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long k;
		cin >> n >> k;
		cout << solve(n, k) << endl;
	}
}
