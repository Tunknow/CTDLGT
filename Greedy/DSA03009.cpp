#include<bits/stdc++.h>

using namespace std;

struct job
{
    int id;
    int deadline;
    int profit;
};

job a[1000];
bool done[1001];

bool comp(job a, job b)
{
    return a.profit>b.profit;
}

int timetowork(job a)
{
    for(int i=a.deadline; i>0; i--) {
        if(done[i]==false) return i;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a[i].id >> a[i].deadline >> a[i].profit;
        }
        sort(a, a+n, comp);
        int cnt=0;
        int p=0;
        int i;
        for(int i=1; i<=n; i++) done[i]=false;
        for(int j=0; j<n; j++) {
                int t=timetowork(a[j]);
                if(t>0) {
                    cnt++;
                    done[t]=true;
                    p+=a[j].profit;
                }
            }
        cout << cnt << " " << p << endl;
    }
}