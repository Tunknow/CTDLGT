#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x: v) cin >> x;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(v[j]<v[i]) {
				swap(v[i], v[j]);
			}
		}
		cout << "Buoc " << i+1 << ": ";
		for(auto x:v) cout << x << " ";
			cout << endl;
	}
}
