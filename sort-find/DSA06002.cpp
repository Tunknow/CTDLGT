#include<bits/stdc++.h>

using namespace std;

int x;

bool comp(int a, int b) {
	return abs(x-a) < abs(x-b);
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n >> x;
		vector<int> v(n);
		for(auto &x:v) cin >> x;
		stable_sort(v.begin(), v.end(), comp);
		for(auto x:v) cout << x << " ";
		cout << endl;
	}
}
