#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long x;
		cin >> n >> x;
		vector<long long> a(n);
		for(auto &x:a) cin >> x;
		int id=-2;
		int l=0, r=n-1;
		while(l<=r) {
			int m=l+(r-l)/2;
			if(a[m]<=x) {
				id=m;
				l++;
			}
			else r--;
		}
		cout << ++id << endl;
	}
}
