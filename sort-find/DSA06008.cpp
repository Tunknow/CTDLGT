#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> X(n), Y(m);
		for(auto &x:X) cin >> x;
		for(auto &y:Y) cin >> y;
		sort(X.begin(),X.end());
		sort(Y.begin(),Y.end());
		int cnt0=upper_bound(Y.begin(),Y.end(), 0)-lower_bound(Y.begin(),Y.end(), 0);
		int cnt1=upper_bound(Y.begin(),Y.end(), 1)-lower_bound(Y.begin(),Y.end(), 1);
		int cnt2=upper_bound(Y.begin(),Y.end(), 2)-lower_bound(Y.begin(),Y.end(), 2);
		int cnt4=upper_bound(Y.begin(),Y.end(), 4)-lower_bound(Y.begin(),Y.end(), 4);
		int cntu4=Y.end()-upper_bound(Y.begin(),Y.end(), 4);
		long long res=0;
		for(int i=0; i<n; i++) {
			if(X[i]==1) {
				res+=cnt0;
			}
			if(X[i]==2) {
				res+=cnt1+cnt0+cntu4;
			}
			if(X[i]==3) {
				res+=cnt0+cnt1+cnt2+cnt4+cntu4;
			}
			else if(X[i]>3) {
				res+=cnt0+cnt1;
				res+=Y.end()-upper_bound(Y.begin(),Y.end(), X[i]);
			}
		}
		//cout << cnt0 << " " << cnt1 <<" " << cnt2 << endl;
		cout << res << endl;
	}
}
