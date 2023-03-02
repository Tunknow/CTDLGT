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
		long long sum=0;
		for(auto &x:v) {
			cin >> x;
			sum+=x;
		}
		int bp=1;
		long long lsum=v[0];
		long long rsum=sum-lsum-v[bp];
		while(bp<n && lsum!=rsum) {
			lsum=lsum+v[bp];
			bp++;
			rsum=rsum-v[bp];
		}
		if(bp==n) cout << -1 << endl;
		else cout << ++bp << endl;
	}
}
