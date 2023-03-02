#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int a[30];
	set<int> st;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		st.insert(a[i]);
	}
	n=st.size();
	auto it=st.begin();
	for(int i=1; i<=n; i++) {
		a[i]=*it;
		it++;
	}
	int b[30];
	for(int i=1; i<=k; i++) b[i]=i;
	while(1)
	{
		for(int i=1; i<=k; i++) cout << a[b[i]] << " ";
		cout << endl;
		int i=k;
		while(i>0 && b[i]==n-k+i) i--;
		if(i==0) break;
		else {
			b[i]=b[i]+1;
			for(int j=i+1; j<=k; j++) b[j]=b[i]+j-i;
		}
	}
}
