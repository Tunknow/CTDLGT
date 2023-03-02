#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        for(int i=1; i<=k; i++) {
            cin >> a[i];
        }
        int i=k;
        while(i>0 && a[i]>=n-k+i) i--;
        if(i==0) cout << k << endl;
        else {
            int cnt=0;
            int acp[100];
            for(int i=1; i<=k; i++) acp[i]=a[i];
            acp[i]++;
            for(int j=i+1; j<=k; j++) {
                acp[j]=acp[i]+j-i;
            }
            for(int i=1; i<=k; i++) {
                auto it=find(a+1, a+k+1, acp[i]);
                if(it==a+k+1) cnt++;
            }
            cout << cnt << endl;
        }
    }
}