#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<vector<bool>> dx(n, vector<bool> (n,true));	
	vector<vector<bool>> dp(n, vector<bool> (n,false));
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(s[i]!=s[j]) {
				int l=i, r=j;
				while(l>=0 && r<=n-1) {
					dx[l][r]=false;
					l--;
					r++;
				}
			}
		}
	}
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(dx[i][j]) dp[i][j]=true;
			else {
				int l=i, r=j;
				while(l<j && !dx[l][j]) {
					l++;
				}
				if(l==j) {
					dp[i][j]=false;
					continue;
				}
				while(r>i && !dx[i][r]) {
					r--;
				}
				if(r==i) {
					dp[i][j]=false;
					continue;
				}
				if(l<=r+1) dp[i][j]=true;
				else if(dx[r][l]) dp[i][j]=true;
			}
		}
	}
	long long res=0;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			cout << i << " " << j << ": " << dp[i][j] << endl;
		}
	}
	cout << res << endl;
}
