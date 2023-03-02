#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for(auto &x:v) cin >> x;
		sort(v.begin(),v.end());
		bool ok=false;
		for(int i=0; i<n-2; i++) {
			int l=i+1;
			int r=n-1;
			while(l<r) {
				if(v[i]+v[l]+v[r]==k) {
					ok=true;
					break;
				}
				else {
					if(v[i]+v[l]+v[r]<k) l++;
					else r--;
				}
			}
		}
		(ok)? cout << "YES" << endl : cout << "NO" << endl;
	}
}
