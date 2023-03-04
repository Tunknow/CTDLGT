#include<bits/stdc++.h>
#define maxdist 4000000

using namespace std;

pair<int, int> nearmid[100000];
pair<int, int> p[100000];

bool comp(pair<int, int> &p1, pair<int, int> &p2) 
{
    return p1.second < p2.second;
}

double dist(pair<int, int> p1, pair<int, int> p2)
{
    long long x1=p1.first, y1=p1.second;
    long long x2=p2.first, y2=p2.second;
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

double mindist(pair<int, int> p[], int n)
{
    double mn=maxdist;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            mn=min(mn,dist(p[i], p[j]));
        }
    }
    return mn;
}

double minmid(pair<int, int> nearmid[], int siz, double d)
{
    double mn=d;
    sort(nearmid, nearmid+siz, comp);
    for(int i=0; i<siz-1; i++) {
        for(int j=i+1; j<siz && (nearmid[j].second-nearmid[i].second)<mn; j++) {
            mn=min(mn, dist(nearmid[i], nearmid[j]));
        }
    }
    return mn;
}

double solve(pair<int, int> p[], int n)
{
    if(n<=3) {
        return mindist(p, n);
    }
    int m=n/2;
    pair<int, int> midPoint=p[m];
    double dl=solve(p, m);
    double dr=solve(p+m, n-m);
    double d=min(dl, dr);
    int j=0;
    for(int i=0; i<n; i++) {
        if(abs(p[i].first-midPoint.first)<d) {
            nearmid[j]=p[i];
            j++;
        }
    }
    return min(d, minmid(nearmid, j, d));
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> p[i].first >> p[i].second;
        sort(p, p+n);
        cout << fixed << setprecision(6) << solve(p, n) << endl;
    }
}