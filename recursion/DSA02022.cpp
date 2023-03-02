#include<bits/stdc++.h>

using namespace std;

int day[9];
int a[2]={0,2};

void solve(int m)
{
	if(m==5) {
		day[m]=2;
		solve(m+1);
	}
	else {
		for(auto x:a) {
			if(m==2 && day[1]==0 && x==0) continue; 
			else if(m==4 && day[3]==0 && x==0) continue;
			else if(m==4 && day[3]==2 && x==0) continue;
			else if(m==4 && day[3]==2 && x==2) continue;
			else {
				day[m]=x;
				if(m==8) {
					for(int i=1; i<=8; i++) {
						if(i==2 || i==4) cout << day[i] << "/";
						else cout << day[i];
					}
					cout << endl;
				}
				else solve(m+1);
			}
		}
	}
}

int main()
{  
	solve(1);
}
