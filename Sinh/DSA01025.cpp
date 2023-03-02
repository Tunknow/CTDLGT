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
		int a[100];
		for(int i=1; i<=k; i++) a[i]=i;
		while(1)
		{
			for(int i=1; i<=k; i++) {
				char c=a[i]+64;
				cout << c;
			}
			cout << endl;
			int i=k;
			while(i>0 && a[i]==n-k+i) i--;
			if(i==0) break;
			a[i]++;
			for(int j=i+1; j<=k; j++) a[j]=a[i]+j-i;
		}
	}
}
