#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(int &x:v) cin >> x;
	vector<vector<int>> res(n);
	res[0].push_back(v[0]);
	vector<int> vcp(n);
	vcp[0]=v[0];
	for(int i=1; i<n; i++) {
		int j=i-1;
		while(j>=0 && vcp[j] > v[i]) {
			vcp[j+1]=vcp[j];
			j--;
		}
		vcp[j+1]=v[i];
		for(int id=0; id<=i; id++) {
			res[i].push_back(vcp[id]);
		}
	}
	for(int i=n-1; i>=0; i--) {
		cout << "Buoc " << i << ": ";
		for(int j=0; j<i+1; j++) cout << res[i][j] << " ";
		cout << endl;
	}
}
