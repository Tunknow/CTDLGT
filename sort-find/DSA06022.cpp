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
		sort(v.begin(), v.end());
		if(v[0]==v[n-1]) cout << -1 << endl;
		else {
			cout << v[0] << " ";
			int i=1;
			while(i<n-1 && v[i]==v[0]) i++;
			cout << v[i] << endl;
		}
	}
}
