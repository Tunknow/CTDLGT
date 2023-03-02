#include<bits/stdc++.h>

using namespace std;

map<int, int> mp;

bool comp(int a, int b) {
	if(mp[a]==mp[b]) return a < b;
	return mp[a]>mp[b];
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		mp.clear();
		int n;
		cin >> n;
		vector<int> v(n);
		for(auto &x:v) {
			cin >> x;
			mp[x]++;
		}
		sort(v.begin(), v.end(), comp);
		for(auto x:v) cout << x << " ";
		cout << endl;
	}
}
