#include<bits/stdc++.h>

using namespace std;

int findID(vector<long long> a, vector<long long> b, int l, int r)
{
    int m=(l+r)/2;
    if(a[m]==b[m]) return findID(a, b, m+1, r);
    else if(a[m-1]!=b[m-1]) return findID(a, b, l, m-1);
    else return m+1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n), b(n-1);
        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;
        cout << findID(a, b, 0, n-1) << endl;
    }
}