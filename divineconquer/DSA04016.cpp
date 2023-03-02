#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m, n, k;
		cin >> m >> n >> k;
		--k;
		vector<int> a(m), b(n);
		for(auto &x:a) cin >> x;
		for(auto &x:b) cin >> x;
		vector<int> v(m+n);
		int res=0;
		int ida=0, idb=0, id=0;
		while(ida<m && idb<n) {
			if(a[ida]<b[idb]) {
				v[id]=a[ida];
				if(id==k) res=a[ida];
				id++;
				ida++;
			}
			else {
				v[id]=b[idb];
				if(id==k) res=b[idb];
				id++;
				idb++;
			}
		}
		while(ida<m) {
			v[id]=a[ida];
			if(id==k) res=v[id];
			id++;
			ida++;
		}
		while(idb<n) {
			v[id]=b[idb];
			if(id==k) res=v[id];
			id++;
			idb++;
		}
		cout << res<< endl;
	}
}