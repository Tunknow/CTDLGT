#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        if(n<m || (n*6<m*7)) cout << -1 << endl;
        else {
            int need=s*m;
            int res=ceil(need*1.0/n);
            cout << res << endl;
        }
    }
}