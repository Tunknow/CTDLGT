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
		for(auto &x: v) cin >> x;
		vector<int> vcp=v;
		sort(vcp.begin(), vcp.end());
		int l=0, r=n-1;
		while(l<n-1 && vcp[l]==v[l]) l++;
		while(r>0 && vcp[r]==v[r]) r--;
		cout << ++l << " " << ++r << endl;
	}
}
