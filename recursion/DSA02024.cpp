#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> res;   
vector<int> temp;
int n;
int a[30];
int pre=0;

void solve(int m)
{
	bool ok=false;
	int prec=pre;
 	for(int i=pre+1; i<=n; i++) {
 		if(a[i]>a[m-1]) {
 			ok=true;
 			pre=i;
 			temp.push_back(a[i]);
 	 		res.push_back(temp);
 			if(m<n) solve(m+1);
 			temp.pop_back();
 			pre=prec;
 		}
 	}
} 

int main()
{
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i];
	solve(1);
	vector<string> ans;
	if(res.size()==0) cout << -1 << endl;
	else {
			bool ok=false;
			for(auto x:res) {
				if(x.size()>=2) {
					string s;
					for(int i=0; i<x.size(); i++) 
					if(i!=0) s+=" "+to_string(x[i]);
					else s+=to_string(x[i]);
					ans.push_back(s);
					ok=true;
				}
			}	
			if(!ok) cout << -1 << endl;
			else {
				sort(ans.begin(), ans.end());
				for(auto x:ans) cout << x << endl;
			}
	}
}

