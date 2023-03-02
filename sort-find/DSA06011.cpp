#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for(auto &x:v) cin >> x;
		int res=2000000;
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				if(abs(v[i]+v[j])<abs(res)) {
					res=v[i]+v[j];
				}
			}
		} 
		cout << res << endl;
	}
}
