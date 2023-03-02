#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		map<long long, long long> mpA, mpB;
		for(int i=0; i<n1; i++) {
			long long in;
			cin >> in;
			mpA[in]++;
		}
		for(int i=0; i<n2; i++) {
			long long in;
			cin >> in;
			mpB[in]++;
		}
		set<long long> inter;
		for(int i=0; i<n3; i++) {
			long long in;
			cin >> in;
			if(mpA[in]>0 && mpB[in]>0) inter.insert(in);
		}
		//sort(inter.begin(), inter.end());
		if(inter.empty()) cout << -1 << endl;
		else {
			for(auto x:inter) cout << x << " ";
			cout << endl;
		}
	}
}
