#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int n=s1.length(), m=s2.length();
		vector<vector<int>> dp(n+1, vector<int> (m+1));
		if(n==0 || m==0) cout << 0 << endl;
		else {
			for(int i=1; i<=n; i++) {
				for(int j=1; j<=m; j++) {
					if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
					else dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
				}
			}
		}
		cout << dp[n][m] << endl;
	}
}
