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
		int res=0;
		for(int i=0; i<n-1; i++) {
			if(v[i+1]-v[i]!=0)res+=v[i+1]-v[i]-1;
		}
		cout << res << endl;
	}
}
