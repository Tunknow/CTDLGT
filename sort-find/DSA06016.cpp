#include<bits/stdc++.h>

#define inf 100000001

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		int n, m;
		cin >> n >> m;
		long long mn=inf, mx=-inf;
		for(int i=0; i<n; i++) {
			long long in;
			cin >> in;
			mx=max(mx, in);
		}
		for(int i=0; i<n; i++) {
			long long in;
			cin >> in;
			mn=min(mn, in);
		}
		cout << mn*mx << endl;
	}
}
