#include<bits/stdc++.h>

using namespace std;

int a[10000];
int n, k;

bool check()
{
	int cnt=0;
	for(int i=1; i<=n; i++) {
		if(a[i]==1) cnt++;
	}
	return cnt==k;
}

void Xnp() {
	for(int i=1; i<=n; i++) {
		a[i]=0;
	}
	while(1) {
		if(check()) {
			for(int i=1; i<=n; i++) {
			cout << a[i];
		}
		cout << endl;
		}
		
		int i=n;
		while(i>0 && a[i]==1) {
			a[i]=0;
			i--;
		}
		if(i==0) return;
		else a[i]=1;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		Xnp();
	}
}
