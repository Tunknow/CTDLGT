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
		for(auto &x:v) cin >> x;
		vector<pair<int, int>> s;
		int i=0;
		while(i<n)
		{
			int cnt=0;
			while(i<n-1 && v[i]<v[i+1]) {
				i++;
				cnt++;
			}
			s.push_back(make_pair(1,cnt));
			cnt=0;
			while(i<n-1 && v[i]>v[i+1]) {
				i++;
				cnt++;
			}
			s.push_back(make_pair(2,cnt));
		}
		int res=0;
		for(int i=0; i<s.size()-1; i++) {
			if(s[i].first==1 && s[i+1].first==2) {
				if(s[i].second!=0 && s[i+1].second!=0) res=max(s[i].second+s[i+1].second+1, res);
			}
		}
		cout << res << endl;
	}
}
