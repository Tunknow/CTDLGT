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
		ll res=0;
		for(int i=0; i<n-1; i++) {
			res+=upper_bound(v.begin()+i+1, v.end(),k-v[i])-lower_bound(v.begin()+i+1, v.end(),k-v[i]);
		}
		cout << res << endl;
	}
}
