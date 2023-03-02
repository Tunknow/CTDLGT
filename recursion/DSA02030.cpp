#include<bits/stdc++.h>

using namespace std;
char c;
int k;
string s="";
char pre='A';

void solve(int m)
{
	char prec=pre;
	for(char i=pre; i<=c; i++) {
		s+=i;
		pre=i;
		if(s.length()==k) cout << s << endl;
		else solve(m+1);
		pre=prec;
		s.pop_back();
	}
}

int main()
{
	cin >> c >> k;
	solve(1);	
}