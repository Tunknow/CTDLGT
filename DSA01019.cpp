#include<bits/stdc++.h>

using namespace std;

int n;
int a[1000];

void Try(int m)
{
	for(int i=0; i<=1; i++) {
		if(a[m-1]==1 && i==1) return;
		else {
			a[m]=i;
			if(m==n-1) {
				for(int id=1; id<=n; id++) {
					(a[id]==1)? cout << "H" : cout << "A";
				}
				cout << endl;
			}
			else Try(m+1);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		a[1]=1;
		a[n]=0;
		if(n==2) cout << "HA" << endl;
		else Try(2);
	}
}
