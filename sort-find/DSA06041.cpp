#include<iostream>
#include<map>
#include<math.h>
#include<vector>

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
		map<int, int> freq;
		for(auto &x:v) {
			cin >> x;
			freq[x]++;
		}
		bool ok=false;
		int res=v[0];
		for(auto [a, b] : freq) {
			if(b>n*1.0/2 && b>freq[res]) {
				ok=true;
				res=a;
			}
		}
		if(ok) {
			cout << res << endl;
		}
		else cout << "NO" << endl;
	}
}
