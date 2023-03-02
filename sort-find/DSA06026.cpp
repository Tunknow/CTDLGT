#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x:v) cin >> x;
	int id=0;
	for(int i=0; i<n; i++) {
		bool ok=false;
		for(int j=0; j<n-i-1; j++) {
			if(v[j]>v[j+1]) {
				ok=true;
				swap(v[j], v[j+1]);
			}
		}
		if(!ok) break;
		cout << "Buoc " << i+1 << ": ";
		for(auto x:v) cout << x << " ";
		cout << endl;
	}
}
