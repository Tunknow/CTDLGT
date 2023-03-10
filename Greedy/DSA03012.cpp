#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int a[26];
        for(int i=0; i<26; i++) a[i]=0;
        for(auto x:s) a[x-'a']++;
        int mx=*max_element(a,a+26);
        if((mx-1)*2 < s.length()) cout << 1 << endl;
        else cout << -1 << endl;
    }
}