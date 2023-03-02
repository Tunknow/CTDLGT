#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100];
	for(int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	int b[100];
	for(int i=1; i<=n; i++) b[i]=i;
	bool ok=false;
	while(1) {
		if(ok) break;
		for(int i=1; i<=n; i++) {
			cout << a[b[i]] << " ";
		}
		cout << endl;
		
		int i=n-1;
		while(i>0 && b[i]>b[i+1]) i--;
		if(i==0) {
			ok=true;
		}
		else {
			int k=n;
			while(b[k]<b[i]) k--;
			swap(b[i], b[k]);
			int l=i+1, r=n;
			while(l<r) {
				swap(b[l], b[r]);
				l++;
				r--;
			}
		}
	}
}
