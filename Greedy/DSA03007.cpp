#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<long long>());
        long long res=0;
        for(int i=0; i<n; i++) res+=a[i]*b[i];
        cout << res << endl;
    }
}