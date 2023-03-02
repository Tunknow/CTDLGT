#include <iostream> 
#include <vector> 
using namespace std; 
string ToString(int i) { 
string res = ""; while (true) { if (i >= 0 && i <= 9) { res = (char)(i + 48) + res; return res; } else { char c = i % 10 + 48; res = c + res; i /= 10; } } } int main() { int x; cin >> x; while (x--) { int n; cin >> n; vector<int> v; int temp; for (int i = 1; i <= n; i++) { cin >> temp; v.push_back(temp); } string res = ""; while (v.size() > 0) { string tempString = "["; for (int i = 0; i < v.size() - 1; i++) { tempString += (ToString(v[i]) + " "); v[i] += v[i + 1]; } tempString += (ToString(v[v.size() - 1])); tempString += "] "; res = tempString + res; v.erase(v.begin() + v.size() - 1); } cout << res; cout << endl; } }
