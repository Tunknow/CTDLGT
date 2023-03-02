#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> dir={{1,0}, {0,-1}, {0,1}, {-1,0}}; //DLRU
int n;
int a[20][20];
bool vis[20][20];
string res="";

bool isOk(int i, int j)
{
	return ( i>=0 && j>=0 && i<n && j<n && a[i][j] && !vis[i][j]);
}

void move(int i, int j, string &s, bool &ok) 
{	
	for(auto [x,y]:dir) {
		int ix=i+x, jx=j+y;
		if(isOk(ix, jx)) {
			vis[ix][jx]=true;
			if(x==1 && y==0) s+="D";
			else if(x==0 && y==-1) s+="L";
			else if(x==0 && y==1) s+="R";
			else s+="U";
			if(ix==n-1 && jx==n-1) {
				cout << s << " ";
				ok=true;
			}	
			else move(ix, jx, s, ok);
			s.pop_back();
			vis[ix][jx]=false;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		string s="";
		for(int i=0; i<n; i++) 
			for(int j=0; j<n; j++) {
				cin >> a[i][j];
				vis[i][j]=false;
			}
		vis[0][0]=true;
		bool ok=false;
		if(a[0][0]==0) cout << -1 << endl;
		else {
			move(0, 0, s, ok);
			if(!ok) cout << -1 << endl;
			else cout << endl;
		}
	}
}