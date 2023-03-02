#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int K;
    string S;

    // Nh?p s? l?n d?i ch? K và xâu S
    cin >> K >> S;

    // S?p x?p xâu S theo th? t? gi?m d?n
    sort(S.begin(), S.end(), greater<char>());

    // Ð?i ch? các ký t? liên ti?p K l?n d? t?o ra s? l?n nh?t có th?
    for (int i = 0; i < K; i++) {
        bool swapped = false;
        for (int j = 0; j < S.length() - 1; j++) {
            if (S[j] < S[j+1]) {
                swap(S[j], S[j+1]);
                swapped = true;
                break;
            }
        }
        if (!swapped) break;
    }

    // In ra xâu S sau khi th?c hi?n d?i ch?
    cout << S << endl;

    return 0;
}

