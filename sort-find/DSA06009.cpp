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
		int res=0;
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				if(v[j]==k-v[i]) res++;
			}
		}
		cout << res << endl;
	}
}
