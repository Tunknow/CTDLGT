#include<bits/stdc++.h>

using namespace std;

priority_queue<int> type;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        type.push(1000);
        type.push(500);
        type.push(200);
        type.push(100);
        type.push(50);
        type.push(20);
        type.push(10);
        type.push(5);
        type.push(2);
        type.push(1);
        int n;
        cin >> n;
        int res=0;
        while(n>0) {
            while(n<type.top()) type.pop();
            n-=type.top();
            res++;
        }
        cout << res << endl;
    }
}