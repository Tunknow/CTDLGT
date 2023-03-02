#include<iostream>

using namespace std;

int res;
int n;
int a[10000];

using namespace std;

void solve(int a[], int n, int in[]) {
	for(int i=1; i<=n; i++) {
		a[i]=i;
	}
	while(1) {
        bool ok=true;
		for(int i=1; i<=n; i++) {
			if(a[i]!=in[i]) {
                    ok=false;
                    break;
                }
		}
        if(ok) {
            cout << res << endl;
            return;
        }
        res++;
		int i=n-1;
		while(i>0 && a[i]>a[i+1]) {
			i--;
		}
		int k=n;
		while(a[k]<a[i]) {
			k--;
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		int l=i+1;
		int r=n;
		while(l<r) {
			int temp=a[l];
			a[l]=a[r];
			a[r]=temp;
			l++; r--;
		}
	}
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        res=1;
        int in[10000];
	    cin >> n;
        for(int i=1; i<=n; i++) cin >> in[i];
        solve(a,n, in); 
    }
}