#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x:v) cin >> x;
	vector<int> res(n);
	cout << "Buoc " << 0 << ": " << v[0] << endl;
	res[0]=v[0];
	for(int i=1; i<n; i++) {
		cout << "Buoc " << i << ": ";
		int id=i-1;
		while(id>=0 && v[i]<res[id]) {
			res[id+1]=res[id];
			id--;
		}
		res[id+1]=v[i];
		for(int j=0; j<=i; j++) cout << res[j] << " ";
		cout << endl;
	}
}
