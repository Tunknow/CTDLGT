#include<bits/stdc++.h>

using namespace std;

long long len[30];

char solve(int n, long long k)
{
    if(k==(len[n]/2 + 1)) {
        return 'A'+n-1;
    }
    if(k<=len[n-1]) return solve(n-1, k);
    else return solve(n-1, k-1-len[n-1]);
}

int main()
{
    len[1]=1; len[2]=3;
    for(int i=3; i< 26; i++) len[i]=2*len[i-1]+1;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}