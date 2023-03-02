#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		bool ok=false;
		for(int i=0; i<n; i++) {
			int in;
			cin >> in;
			if(in == x) ok=true;
		}
		(ok)? cout << 1 << endl : cout << -1 << endl;
	}
}
