#include<bits/stdc++.h>
#define inf 1000000000

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
		sort(v.begin(),v.end());
		int res=inf;
		for(int i=0; i<n-1; i++) {
			res=min(res,v[i+1]-v[i]);
		}
		cout << res << endl;
	}
}
