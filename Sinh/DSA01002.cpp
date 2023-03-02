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
		int a[10000];
		for(int i=1; i<=k; i++) {
			cin >> a[i];
		}
		int i=k;
		while(i>0 && a[i]==n-k+i) {
			i--;
		}
		if(i==0) {
			for(int id=1; id<=k; id++) {
				cout << id << " ";
			}
			cout << endl;
		}
		else {
			a[i]=a[i]+1;
			for(int j=i+1; j<=k; j++) {
				a[j]=a[i]+j-i;
			}
			for(int id=1; id<=k; id++) {
				cout << a[id] << " ";
			}
			cout << endl;
		}
	}
}
