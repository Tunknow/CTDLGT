#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) 
	{
		int n;
		cin >> n;
		vector<int> v(n);
		set<int> st;
		for(auto &x:v) {
			cin >> x;
			string s=to_string(x);
			for(auto c:s) st.insert(c-'0');
		}
		for(auto x:st) cout << x << " ";
		cout << endl;
	}
}
