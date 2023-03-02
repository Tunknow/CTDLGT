#include<bits/stdc++.h>

using namespace std;

int cnt;
int n;
bool board[11][11];
bool row[11];
bool diag1[30];
bool diag2[30];

void Try(int m)
{
	for(int i=1; i<=n; i++) {
		if(!row[i] && !diag1[i+m-1] && !diag2[i-m+n]) {
			diag1[i+m-1]=true;
			diag2[i-m+n]=true;
			row[i]=true;
			if(m==n) cnt++;
			else Try(m+1);
			diag1[i+m-1]=false;
			diag2[i-m+n]=false;
			row[i]=false;
		}
	}
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		for(int i=1; i<=n; i++) row[i]=false;
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++) board[i][j]=false;
		for(int i=1; i<=2*n-1; i++) {
			diag1[i]=false;
			diag2[i]=false;
		}
		cnt=0;
		cin >> n;
		Try(1);
		cout << cnt << endl;
	}
}