#include<bits/stdc++.h>

using namespace std;

string s;
int n;

void Try(int m, int id)
{
	if(m==s.length()) {
		cout << s << endl;
		return;
	}
	if(*max_element(s.begin()+m-1, s.end())!=*(s.begin()+m-1)) 
	{	
		swap(*max_element(s.begin()+m-1, s.end()),*( s.begin()+m-1));
		if(id==n) cout << s << endl;
		else Try(m+1, id+1);	
	}
	else {
		
		Try(m+1, id);

	} 
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> s;
		Try(1,1);
	}
}
