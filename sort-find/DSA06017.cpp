#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for(auto &x:a) cin >> x;
		for(auto &x:b) {
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		for(auto x:a) cout << x << " ";
		cout << endl;
	}
}
