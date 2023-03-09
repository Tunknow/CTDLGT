#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int, int> w[n];
        for(int i=0; i<n; i++) cin >> w[i].first >> w[i].second;
        
        sort(w, w+n,comp);
        int cnt=1;
        int i=0;
        for(int j=1; j<n; j++) {
            if(w[j].first >=w[i].second) {
                i=j;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}