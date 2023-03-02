#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[100001];
		for(int i=0; i<n; i++) cin >> a[i];
		int l=0, r=n-1;
		bool ok=false;
		while(l<=r) {
			int m=(r+l)/2;
			if(a[m]==k) {
				cout << ++m << endl;
				ok=true;
				break;
			}
			else {
				if(a[m]<k) {
					l=m+1;
				}
				else r=m-1;
			}
		}
		if(!ok) cout << "NO" << endl; 
	}
}