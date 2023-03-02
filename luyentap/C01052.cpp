#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n%2==1) cout << 0 << endl;
		else {
			int cnt=0;
			while(n%2==0) {
				cnt++;
				n/=2;
			}
			int cnt1=0;
			for(int i=1; i<=sqrt(n); i++) {
				if(n%i==0) {
					if(n/i==i) cnt1++;
					else cnt1+=2;
				}
			}
			cout << cnt*cnt1 << endl;
		}
	}
}
