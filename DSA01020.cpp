#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int index=s.length()-1;
        while(index>=0 && s[index]!='1') {
            s[index]='1';
            index--;
        }
        if(index==-1) {
            cout << s << endl;
        }
        else {
            s[index]='0';
            cout << s << endl;
        }
    }
}