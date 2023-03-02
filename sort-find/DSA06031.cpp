#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for(auto &x:v) cin >> x;	
		
		deque<int> w(k);
		for(int i=0; i<k; i++) {
			while(!w.empty() && v[i]>=v[w.back()]) w.pop_back();
			w.push_back(i);
		}
		
		for(int i=k; i<n; i++) {
			cout << v[w.front()] << " ";
			while(!w.empty() && w.front() <= i-k) {
				w.pop_front();
			}
			while(!w.empty() && v[w.back()] <=v[i]) w.pop_back();
			w.push_back(i);
		}
		cout << v[w.front()] << endl;;
	}
}
