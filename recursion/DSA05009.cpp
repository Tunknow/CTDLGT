#include<bits/stdc++.h> 

using namespace std;

int a[101];
int n;

bool isEx(int m, int sum)
{
	if(sum==0) return true;
	if(n==0 && sum!=0) return false;
	if(a[m-1]>sum) return isEx(m-1, sum);
	return isEx(m-1, sum) || isEx(m-1, sum-a[m-1]);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int sum=0;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%2==1) cout << "NO" << endl;
		else {
			if(isEx) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
		
}