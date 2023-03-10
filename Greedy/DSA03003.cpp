#include<bits/stdc++.h>

using namespace std;

int mod=1e9+7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x:a) cin >> x;
        sort(a.begin(), a.end());
        long long mx=0;
        for(int i=0; i<n; i++) {
            mx+=(long long) a[i]*i;
            mx%=mod;
        }
        cout << mx << endl;
    }
}