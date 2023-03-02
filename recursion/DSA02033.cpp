#include<bits/stdc++.h>

using namespace std;
int n;
int a[10];
bool vis[10];

void Try(int m)
{
	for(int i=1; i<=n; i++) {
		if(!vis[i]) {
			if(m==1 || (m>1 && abs(i-a[m-1])>1)) {
				a[m]=i;
				vis[i]=true;
				if(m==n) {
					for(int j=1; j<=n; j++) cout << a[j];
					cout << endl; 
				}
				else Try(m+1);
				vis[i]=false;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		for(int i=1; i<=n; i++) vis[i]=false;
		cin >> n;
		Try(1);
	}
}
