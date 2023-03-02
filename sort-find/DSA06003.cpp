#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int cnt=0;
		vector<int> a(n);
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		int res=0;
		for(int i=0; i<n-1; i++) {
			int mn=a[i];
			int index=i;
			for(int j=i+1; j<n; j++) {
				if(a[j]<mn) {
					mn=a[j];
					index=j;
				}
			}
			if(a[i]!=a[index]) {
				swap(a[i], a[index]);
				res++;
			}
		}
		cout << res << endl;
	}
}
