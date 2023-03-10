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
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=0; i<n; i++) {
            int len;
            cin >> len;
            pq.push(len);
        }
        long long res=0;
        while(pq.size()>1) {
            int fi=pq.top();
            pq.pop();
            int se=pq.top();
            pq.pop();
            res+=fi+se;
            pq.push(fi+se);
        }
        cout << res << endl;
    }
}