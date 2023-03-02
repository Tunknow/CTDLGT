#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> dir={{1,0}, {0,1}};
int n, m;
int a[20][20];
int res=0;

bool isOk(int i, int j)
{
	return ( i>=0 && j>=0 && i<n && j<m);
}

void move(int i, int j) 
{	
	for(auto [x,y]:dir) {
		int ix=i+x, jx=j+y;
		if(isOk(ix, jx)) {
			if(ix==n-1 && jx==m-1) {
				res++;
			}	
			else move(ix, jx);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		res=0;
		cin >> n >> m;
		string s="";
		for(int i=0; i<n; i++) 
			for(int j=0; j<m; j++) cin >> a[i][j];
		move(0, 0);
		cout << res << endl;
	}
}