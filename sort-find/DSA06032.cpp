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
		vector<long long> v(n);
		for(auto &x:v) cin >> x;
		sort(v.begin(), v.end());
		long long res=0;
		for(int i=0; i<n-2; i++) {
			for(int j=i+1; j<n-1; j++) {
				long long sum=v[i]+v[j];
				long long val=k-sum;
				auto id=lower_bound(v.begin()+j+1, v.end(), val);
				res+=id-(v.begin()+j+1);
			}
		}
		cout << res << endl;
	}
}
