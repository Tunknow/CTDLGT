#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100];
string name[100];

void Try(int m)
{
	for(int i=a[m-1]+1; i<=n-k+m; i++) {
		a[m]=i;
		if(m==k) {
			for(int i=1; i<=k; i++) {
				cout << name[a[i]] << " ";
			}
			cout << endl;
		}
		else Try(m+1);
	}
}

int main()
{
	cin >> n >> k;
	set<string> st;
	for(int i=1; i<=n; i++) {
		cin >> name[i];
		st.insert(name[i]);
	}
	n=st.size();
	int j=0;
	for(auto x:st) {
		++j;
		name[j]=x;
	}
	Try(1);
}
