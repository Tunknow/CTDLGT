#include<bits/stdc++.h>

using namespace std;

void Try(int n, int a[]) {
	if(n==0) return;
	cout << "[";
	for(int i=0; i<n; i++) {
		cout << a[i];
		if(i!=n-1) cout << " ";
	}
	cout << "]" << endl;
	int b[11];
	for(int i=0; i<n-1; i++) b[i]=a[i]+a[i+1];
	Try(n-1, b);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[11];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		Try(n, a);
	}
}
