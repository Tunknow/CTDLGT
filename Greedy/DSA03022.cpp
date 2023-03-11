#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos=0, neg=0, ze=0;
    int a[10000];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        else ze++;
    }
    sort(a, a+n);
    int case1=a[n-1]*a[n-2]*a[n-3];
    int case2=a[n-1]*a[n-2];
    int case3=a[0]*a[1]*a[n-1];
    int case4=a[0]*a[1];
    cout << max({case1,case2,case3,case4});
}