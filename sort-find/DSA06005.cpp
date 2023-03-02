#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		vector<int> a(n);
		vector<int> b(m);
		set<int> uni;
		set<int> inter;
		for(auto &x:a) {
			cin >> x;
			uni.insert(x);
		}
		for(auto &x:b) {
			cin >> x;
			uni.insert(x);
			if(find(a.begin(), a.end(), x)!=a.end()) inter.insert(x);
		}
		for(auto x:uni) cout << x << " ";
		cout << endl;
		for(auto x:inter) cout << x << " ";
		cout << endl;
	}
}
