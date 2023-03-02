#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(int &x:v) cin >> x;
	vector<vector<int>> res(n-1);
	for(int i=0; i<n-1; i++) {
		int idm=i;
		for(int j=i+1; j<n; j++) {
			if(v[j] < v[idm]) {
				idm=j;
			}
		}
		swap(v[i], v[idm]);
		for(int j=0; j<n; j++) {
			res[i].push_back(v[j]);
		}
	}
	for(int i=n-2; i>=0; i--) {
		cout << "Buoc " << i+1 << ": ";
		for(int j=0; j<n; j++) cout << res[i][j] << " ";
		cout << endl;
	}
}
