#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[10000];
		for(int i=1; i<=n; i++) {
			cin >> a[i];
		}
		int i=n-1;
		while(i>0 && a[i]>a[i+1]) i--;
		if(i==0) {
			for(int j=1; j<=n; j++) cout << j << " ";
			cout << endl;
		}
		else {
			int k=n;
			while(k>0 && a[k]<a[i]) k--;
			swap(a[i],a[k]);
			int l=i+1, r=n;
			while(l<r) swap(a[l],a[r]);
			for(int id=1; id<=n; id++) cout << a[id] << " ";
			cout << endl;
		}
	}
}
