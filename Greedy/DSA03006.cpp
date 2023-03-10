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
        int a[50];
        for(int i=0; i<n; i++) cin >> a[i];
        bool ok=true;
        for(int i=0; i<n/2; i++) {
            int mn1=min(a[i],a[n-1-i]);
            int mn2=min(a[i+1],a[n-1-i-1]); 
            int mx1=max(a[i],a[n-1-i]);
            int mx2=max(a[i+1],a[n-1-i-1]);
            if((mn1>mn2) || (mx1<mx2)) {
                ok=false;
                break;
            }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}