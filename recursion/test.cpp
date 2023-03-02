#include<bits/stdc++.h>

using namespace std;

int a[100];
int id=0;
int n, k;

void Try(int m) {
	for(int i=a[m-1]+1; i<=n-k+m; i++) {
		a[m]=i;
		if(m==k) {
			cout << ++id << ": ";
			for(int j=1; j<=k; j++) cout << a[j] << " ";
			cout << endl;
		}
		else Try(m+1);
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
}
