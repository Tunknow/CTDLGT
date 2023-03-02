#include<bits/stdc++.h>

using namespace std;

bool ok(string s) {
	int len=s.length();
	if(len<5) if(s[0]=='A' || s[len-1]=='A') return true;
	else {
		if((s[0]=='A' && s[len-1]=='E') || (s[0]=='E' && s[len-1]=='A')) return true;
	}
	return false;
}

int main()
{
	char c;
	cin >> c;
	int n=c-'A'+1;
	string s="ABCDEFGH";
	string res=s.substr(0,n);
	if(ok(res)) cout << res<< endl;
	while(next_permutation(res.begin(), res.end()))if(ok(res)) cout << res<< endl; 
}