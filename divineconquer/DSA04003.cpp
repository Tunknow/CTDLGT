#include<bits/stdc++.h>

using namespace std;

int mod=123456789;

long long Count(long long n)
{
	if(n==1) return 1;
	
	long long cnt=0;
	for(int i=1; i<n; i++) {
		cnt+=Count(n-i)%mod;
	}
	return (cnt+1)%mod;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		cout << Count(n) << endl;
	}
}
