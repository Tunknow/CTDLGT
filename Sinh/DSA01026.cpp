#include<bits/stdc++.h>

using namespace std;

int a[20];
int n;
int b[2]={6,8};

void Try(int m) {
	for(auto x:b) {
		bool ok=false;

		if(x==6 && !(a[m-1]==6 && a[m-2]==6 && a[m-3]==6)) {
   			a[m]=x;
   			ok=true;
		}
		if(x==8 && a[m-1]==6) {
			a[m]=x;
			ok=true;
		}
		if(ok) {
			if(m==n && a[n]==6 && a[1]==8) {
			for(int i=1; i<=n; i++) cout << a[i];
			cout << endl;
		}
		else Try(m+1);

		}
	}
}

int main()
{
	cin >> n;
	a[1]=8;
	Try(1);
}