#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        priority_queue<int> q1, q2, q3;
        int in;
        for(int i=0; i<n; i++) {
            cin >> in;
            q1.push(in);
        }
        for(int i=0; i<m; i++) {
            cin >> in;
            q2.push(in);
        }
        for(int i=0; i<k; i++) {
            cin >> in;
            q3.push(in);
        }

        vector<int> res;
        while(!q1.empty() && !q2.empty() && !q3.empty()) {
            if(q1.top()==q2.top() && q1.top()==q3.top()) {
                res.push_back(q1.top());
                q1.pop();
                q2.pop();
                q3.pop();
            }
            else {
                if(q1.top()>q2.top()) {
                    if(q1.top()>q3.top()) q1.pop();
                    else if(q3.top()>q1.top()) q3.pop();
                    else {
                        q1.pop();
                        q3.pop();
                    }
                }
                else if(q1.top()<q2.top()) {
                    if(q2.top()>q3.top()) q2.pop();
                    else if(q3.top()>q2.top()) q3.pop();
                    else {
                        q2.pop();
                        q3.pop();
                    }
                }
                else {
                    if(q3.top()>q1.top()) q3.pop();
                    else {
                        q1.pop();
                        q2.pop();
                    }
                }
            }
        }
        if(res.empty()) cout << "NO" << endl;
        else {
            sort(res.begin(),res.end());
            for(auto x:res) cout << x << " ";
            cout << endl;    
        }
    }
}