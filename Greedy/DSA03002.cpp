#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string amax=a, bmax=b, amin=a, bmin=b;
    for(int i=0; i<a.length(); i++) {
        if(amax[i]=='5') amax[i]='6';
        if(amin[i]=='6') amin[i]='5';
    }
    for(int i=0; i<b.length(); i++) {
        if(bmax[i]=='5') bmax[i]='6';
        if(bmin[i]=='6') bmin[i]='5';
    }
    cout << stoi(amin)+stoi(bmin) << " " << stoi(amax)+stoi(bmax);
}