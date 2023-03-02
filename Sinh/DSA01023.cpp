#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[100];
		for(int i=1; i<=k; i++) cin >> a[i];
		int b[100];
		for(int i=1; i<=k; i++) b[i]=i;
		int cnt=0;
		while(1) {
			bool ok=true;
			for(int i=1; i<=k; i++) {
				if(a[i]!=b[i]) ok=false;
			}
			if(ok) {
				cout << ++cnt << endl;
				break;
			}
			cnt++;
			int i=k;
			while(i>0 && b[i]==n-k+i) i--;
			b[i]++;
			for(int j=i+1; j<=k; j++) b[j]=b[i]+j-i;
		}
	}
}
