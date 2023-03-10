#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        int a[51];
        int sum=0;
        int sum1=0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            sum+=a[i]; 
        }
        sort(a, a+n);
        for(int i=0; i<min(k, n-k); i++) {
            sum1+=a[i];
        }
        cout << sum-2*sum1 << endl;
    }
}