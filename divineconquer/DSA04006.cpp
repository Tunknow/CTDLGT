#include<bits/stdc++.h>

using namespace std;

vector<long long> len;

long long f(long long n, long long l, long long r)
{
    if(n==0) return 0;
    if(l>r) return 0;
    long long len=pow(2, (long long) log2(n)+1)-1;
    long long mid=(len-1)/2+1;
    if(l==r && l==mid) {
        if(n%2==1) return 1;
        return 0;
    }
    if(r<mid) return f(n/2,l,r);
    if(l>mid) return f(n/2,l-mid, r-mid);
    if(n%2==1) return 1+f(n/2,l,mid-1)+f(n/2,1,r-mid);
    else return f(n/2,l,mid-1)+f(n/2,1,r-mid);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, l, r;
        cin >> n >> l >> r;
        cout << f(n,l,r) << endl;
    }
}