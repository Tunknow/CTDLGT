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
            int c;
            cin >> c;
            pq.push(c);
        }
        long long a=0, b=0;
        bool f=true;
        while(!pq.empty()) {
            if(f) {
                a*=10;
                a+=pq.top();
                pq.pop();
                f=false;
            }
            else {
                b*=10;
                b+=pq.top();
                pq.pop();
                f=true;
            }
        }
        cout << a + b << endl;
    }
}