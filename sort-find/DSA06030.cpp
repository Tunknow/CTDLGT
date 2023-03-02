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
		for(auto &x:v) cin >> x;
		vector<vector<int>> res(n);
		int step=-1;
		for(int i=0; i<n-1; i++) {
			step++;
			bool ok=false;
			for(int j=0; j<n-i-1; j++) {
				if(v[j]>v[j+1]) {
					ok=true;
					swap(v[j], v[j+1]);
				}
			}
			if(!ok) break;
			for(int j=0; j<n; j++) {
				res[i].push_back(v[j]);
			}
		}
		
		for(int i=step-1; i>=0; i--) {
			cout << "Buoc " << i+1 << ": ";
			for(int j=0; j<n; j++) {
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}
