#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<bool> era(2*n,true);
		for(int i=2; i<=n; i++) {
			if(era[i]) {
				for(int j=2*i; j<=n; j+=i) era[j]=false;
			}
		}
		bool ok=false;
		if(n<=3) {
		}
		else
		for(int i=2; i<=n-2; i++) {
			if(era[i] && era[n-i]) {
				cout << i << " " << n-i << endl;
				ok=true;
				break;
			}
		}
		if(!ok) cout << -1 << endl;
	}
}
