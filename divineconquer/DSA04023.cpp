#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long res=0;
        for(int i=0; i<n-1; i++) {
            res+=lower_bound(a.begin(), a.end(),a[i]+k)-(a.begin()+i+1);
        }
        cout << res << endl;
    }
}