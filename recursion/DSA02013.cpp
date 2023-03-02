#include<bits/stdc++.h>

using namespace std;

int n, p, s;
bool isPrime[201];
int res[11];
int cnt;

void Try1(int m, int sum) 
{
	int id=n-m+1;
	for(int i=res[id-1]+1; i<=sum; i++) {
		if(isPrime[i] && sum >=i) {
   			res[id]=i;
   			if(id==n && sum==i) {
   	   			cnt++;
   			}
   			else Try1(m-1, sum-i);
		}
	}
}

void Try2(int m, int sum) 
{
	int id=n-m+1;
	for(int i=res[id-1]+1; i<=sum; i++) {
		if(isPrime[i] && sum>=i) {
   			res[id]=i;
   			if(id==n && sum==i) {
   	   			for(int j=1; j<=n; j++) cout << res[j] << " ";
   	   			cout << endl; 
   			}
   			else Try2(m-1,sum-i);
		}
	}
}

int main()
{
	for(int i=2; i<=200; i++) isPrime[i]=true;
	for(int i=2; i<=200; i++) {
		if(isPrime[i]) {
			for(int j=i*i; j<=200; j+=i) isPrime[j]=false;
		}
	}
	int t;
	cin >> t;
	while(t--)
	{
		cnt=0;
		cin >> n >> p >> s;
		res[0]=p;
		Try1(n,s);
		cout << cnt << endl;
		Try2(n,s);
	}
}
