#include<bits/stdc++.h>

using namespace std;

int a[30];
int b[30];
int n, x;
bool ok;
int cnt=0;

void Try(int m, int s)
{
	for(int i=1; i<=n; i++) {
		if(a[i]>=b[m-1] && s+a[i] <= x) {
			b[m]=a[i];
			s+=a[i];
			if(s==x) {
				ok=true;
				cout << "[";
				for(int j=1; j<=m; j++) {
					if(j!=m) cout << b[j] << " ";
					else cout << b[j];
				}
				cout << "]";
			}
			else Try(m+1, s);
			s-=a[i];
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> x;
		ok=false;
		for(int i=1; i<=n; i++) cin >> a[i];
		Try(1, 0);
		if(!ok) cout << -1;
		cout << endl;
	}
}
