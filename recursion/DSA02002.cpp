#include<bits/stdc++.h>

using namespace std;

int a[11];
int b[11];
int nc;
int id=1;

void Try(int k, int m[]) {
	if(id==k+1) return;
	if(k==0) return;
	if(k==id) {
		cout << "[";
		for(int i=0; i<k; i++) {
			cout << m[i];
			if(i!=k-1) cout << " ";
		}
		cout << "] ";
		++id;
		Try(nc, a);
	}
	else {
		for(int i=0; i<k-1; i++) b[i]=m[i]+m[i+1];
		Try(k-1, b);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		nc=n;
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		Try(n, a);
		cout << endl;
		id=1;
	}
}
