#include<bits/stdc++.h>

using namespace std;

bool board[8][8];
int score[8][8];
bool row[8];
bool diag1[15];
bool diag2[15];
int temp;
int res;

void Try(int m)
{
	for(int i=0; i<8; i++) {
		if(!row[i] && !diag1[i+m-2] && !diag2[i-m+7]) {
			row[i]=true;
			diag1[i+m-2]=true;
			diag2[i-m+7]=true;
			temp+=score[i][m-1];
			if(m==8) res=max(res, temp);
			else Try(m+1);
			row[i]=false;
			diag1[i+m-2]=false;
			diag2[i-m+7]=false;
			temp-=score[i][m-1];
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{   
		temp=0;
		res=0;
		for(int i=0; i<8; i++) row[i]=false;
		for(int i=0; i<15; i++) {
			diag1[i]=false;
			diag2[i]=false;
		}
		for(int i=0; i<8; i++)
			for(int j=0; j<8; j++) {
				board[i][j]=false;
				cin >> score[i][j];
			}
		Try(1);
	   	cout << res<< endl;
	}
}