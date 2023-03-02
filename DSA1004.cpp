#include<bits/stdc++.h>

using namespace std;

int n,k;
int a[1000];

void Try(int m)
{
	for(int i=a[m-1]+1; i<=n+m-k; i++) {
		a[m]=i;
		if(m==k) {
			for(int id=1; id<=k; id++) {
				cout << a[id];
			}
			cout << " ";
		}
		else Try(m+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}
