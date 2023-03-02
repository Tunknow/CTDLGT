#include <bits/stdc++.h>
using namespace std;

int res;

void backtrack(string s, int n, int cur) {
    if (n == 0 || cur == s.size()) {
        int num = stoi(s);
        res = max(res, num);
        return;
    }

    for (int i = cur; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            swap(s[i], s[j]);
            backtrack(s, n - 1, cur + 1);
            swap(s[i], s[j]);
        }
    }
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
	    string s;
	    cin >> n >> s;
	    res=stoi(s);
	    backtrack(s, n, 0);
	    cout << res << endl;
	}
}
