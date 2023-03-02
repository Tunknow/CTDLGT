#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

void test_case()
{
    int n;
    cin >> n;
    int mn=1000000000;
    int mx=0;
    vector<int> siz(n);
    map<int, int> mp;
    for(auto &x:siz) {
        cin >> x;
        mn=min(x,mn);
        mx=max(x,mx);
        mp[x]++;
    }
    int res=0;
    if(mn==mx) {
        cout << n << endl;
        return;
    }
    while(mn<mx) {
        while(mp[mn]!=0) {
            res++;
            mp[mn]--;
            int st=mn+1;
            while(st<mx && mp[st]!=0) {
                mp[st]--;
                st++;
            }
        }
        mn++;
    }
    cout <<"kq: " << res << endl;
}

int main()
{
//     #ifndef ONLINE_JUDGE
//    freopen("out", "w", stdout);
//    #endif
    int t;
    cin >> t;
    while(t--)
    {
        test_case();
    }
}
