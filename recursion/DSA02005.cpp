#include<bits/stdc++.h>

using namespace std;

int a[100];
int n;
int vis[100];
string s;

void solve(int m)
{
	for(int i=1; i<=n; i++) {
		if(!vis[i]) {
			vis[i]=1;
			a[m]=i;
			if(m==n) {
				for(int j=1; j<=n; j++) cout << s[a[j]-1];
				cout << " ";
			}
			else solve(m+1);
			vis[i]=0;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> s;
		n=s.length();
		solve(1);
		cout << endl;
	}
}
