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
		for(int &x:v) cin >> x;
		vector<vector<int>> res(n-1);
		for(int i=0; i<n-1; i++) {
			for(int j=i+1; j<n; j++) {
				if(v[j] < v[i]) {
					swap(v[i], v[j]);
				}
			}
			for(int j=0; j<n; j++) {
				res[i].push_back(v[j]);
			}
		}
		int siz= res.size();
		for(int i=siz-1; i>=0; i--) {
			cout << "Buoc " << i+1 << ": ";
			for(int j=0; j<n; j++) cout << res[i][j] << " ";
			cout << endl;
		}
	}
}
