#include<bits/stdc++.h>

using namespace std;

long long res=0;
long long sum[10001];

void divine(int a[], int l, int mid, int r)
{
	
}

void divine(int a[], int l, int r) {
	if(l>=r) return;
	int mid=l+(r-l)/2;
	divine(a, l, mid);
	divine(a, mid+1, r);
	com(a, l, mid, r);
}

int main()
{
	int n;
	cin >> n;
	int a[100001];
	int cnt=0;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sum[0]=a[0];
	for(int i=1; i<n; i++) sum[i]=sum[i-1]+a[i];
	cout << res << endl;
}
