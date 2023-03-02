#include<bits/stdc++.h>

using namespace std;

int cnt=0;

void Try(int id, int k, int n, vector<int> &np, vector<int> &v)
{
	for(int i=0; i<=1; i++) {
		np[id]=i;
		if(id==n) {
			int sum=0;
			for(int j=1; j<=n; j++) sum+=np[j]*v[j];
			if(sum==k) {
				cnt++;
				for(int index=1; index<=n; index++) {
					if(np[index]==1) cout << v[index] << " ";
				}
				cout << endl;
			}
		}
		else Try(id+1, k, n, np, v);
	}
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n+1), np(n+1,0);
	for(int i=1; i<=n; i++) cin >> v[i];
	Try(1, k,n , np, v);
	cout << cnt << endl;
}
