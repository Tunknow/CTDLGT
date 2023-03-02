#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a[100001];
	long long res=0;
	long long sum;
	for(int i=0; i<n; i++) {
		(s[i]=='A')? a[i]=0 : a[i]=1;
	}
	for(int i=0; i<n-1; i++) {
		sum=a[i];	
		for(int j=i+1; j<n; j++) {
			int midsum=sum-a[i];
			sum+=a[j];
			if(s[i]==s[j] && (midsum==0 || midsum==j-i-1)) res++;
			else if(midsum>0 && midsum<j-i-1) res++; 
			//cout << i <<" " << j << ": " << midsum << endl;
		}
	} 
	cout << res << endl;
}
