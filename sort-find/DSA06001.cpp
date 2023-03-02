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
		sort(v.begin(), v.end());
		for(int i=0; i<n/2; i++) {
			cout << v[n-1-i] << " " << v[i] << " ";
		}
		if(n%2==1) {
			cout << v[n/2] << endl;
		}
		else cout << endl;
	}
}
