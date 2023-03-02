#include<bits/stdc++.h>

using namespace std;

void Try(int n, char fr, char mid, char to)
{
	if(n==1) {
		cout << fr <<" -> " << to << endl;
		return;
	}
	Try(n-1, fr, to, mid);
	Try(1,fr, mid, to);
	Try(n-1,mid, fr, to);
}

int main()
{
	int n;
	cin >> n;
	Try(n,'A', 'B', 'C');
}
