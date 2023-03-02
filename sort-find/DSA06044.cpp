#include<bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
	return a>b;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> io, ie;
	for(int i=0; i<n; i++) {
		cin >> v[i];
		if(i%2==0) io.push_back(v[i]);
		else ie.push_back(v[i]);
	}
	sort(io.begin(),io.end());
	sort(ie.begin(), ie.end(), comp);
	for(int i=0; i<n/2; i++) {
		cout << io[i] << " " << ie[i] << " ";
	}
	if(n%2==1) cout << io[io.size()-1];
}
