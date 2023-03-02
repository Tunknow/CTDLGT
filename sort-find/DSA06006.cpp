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
		vector<int> v(n);
		for(auto &x:v) cin >> x;
		for(int i=0; i<n-1; i++) {
			for(int j=0; j<n-i-1; j++) {
				if(v[j+1]<v[j]) swap(v[j+1], v[j]);
			}
		}
		for(auto x:v) cout << x << " ";
		cout << endl;
	}
}
