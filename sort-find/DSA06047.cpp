#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<long long> a(n);
		for(auto &x:a) cin >> x;
		sort(a.begin(),a.end());
		bool ok=false;
		for(int i=n-1; i>=2; i--) {
			int l=0, r=i-1;
			while(l<r) {
				if(a[l]*a[l]+a[r]*a[r]==a[i]*a[i]) {
					ok=true;
					break;
				}
				else {
					if(a[l]*a[l]+a[r]*a[r]<a[i]*a[i]) {
						l++;
					}
					else {
						r--;
					}
				}
			}
		}
		(ok)? cout << "YES" << endl : cout << "NO" << endl;
	}
}
