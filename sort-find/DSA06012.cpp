#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for(auto &x:v) cin >> x;
		sort(v.begin(), v.end());
		int kcp=k;
		while(kcp--) {
			cout << v[n-k+kcp] << " ";
		}
		cout << endl;
	}
}
