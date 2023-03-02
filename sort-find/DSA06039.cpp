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
		vector<int> v(n);
		map<int,int> freq;
		for(auto &x:v) {
			cin >> x;
			freq[x]++;
		}
		bool ok=false;
		for(auto x:v) {
			if(freq[x]>1) {
				cout << x << endl;
				ok=true;
				break;
			}
		}
		if(!ok) cout << "NO" << endl;
	}
}
