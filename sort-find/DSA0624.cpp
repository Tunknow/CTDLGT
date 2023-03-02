#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt=0;
	int a[1000];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=0; i<n-1; i++) {
		cnt++;
		cout << "Buoc " << cnt << ": ";
		int mn=a[i];
		int index=i;
		for(int j=i+1; j<n; j++) {
			if(a[j]<mn) {
				mn=a[j];
				index=j;
			}
		}
		swap(a[i], a[index]);
		for(int j=0; j<n; j++) cout << a[j] << " ";
		cout <<endl;
	}
}
