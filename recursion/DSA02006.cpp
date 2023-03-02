#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[20];
int b[20];
vector<vector<int>> res;
vector<int> temp;

void solve(int m)
{
	for(int i=0; i<=1; i++)
	{
		a[m]=i;
		if(m==n) {
			int sum=0;
			for(int j=1; j<=n; j++) {
				if(a[j]) sum+=b[j];
			}
			if(sum==k) {
				temp.clear();
				for(int j=1; j<=n; j++) {
					if(a[j]==1) {
						temp.push_back(b[j]);
					}
				}
				res.push_back(temp);
			}
		}
		else solve(m+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		res.clear();
		cin >> n >> k;
		for(int i=1; i<=n; i++) {
			a[i]=0;
			cin >> b[i];
		}
		sort(b+1, b+n+1);
		solve(1);
		sort(res.begin(),res.end());
		if(res.size()==0) cout << -1;
		else for(auto x:res) {
			cout << "[";
			for(int i=0; i<x.size(); i++) {
				if(i!=x.size()-1) cout << x[i] << " ";
				else cout << x[i] << "] ";
			}
		}
		cout << endl;
	}
}
