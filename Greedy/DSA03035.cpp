#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100000];
    int id[100000];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        id[a[i]-1]=i;
    }
    int mxc=1;
    int c=1;
    for(int i=1; i<n; i++) {
        if(id[i]>id[i-1]) {
            c++;
            mxc=max(c,mxc);
        }
        else {
            mxc=max(mxc,c);
            c=1;
        }
    }
    cout << n-mxc;
}