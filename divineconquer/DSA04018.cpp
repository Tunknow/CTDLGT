#include<bits/stdc++.h>

using namespace std;

int cnt(int l, int r, int a[])
{  
	if(l>r) return 0;
	int m=l+(r-l)/2;
	if(a[m]==0) return m-l+1+cnt(m+1, r,a);
	else return cnt(l, m-1,a);	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[10000];
		for(int i=0; i<n; i++) cin >> a[i];
		cout << cnt(0, n-1, a) << endl;
	}
}
