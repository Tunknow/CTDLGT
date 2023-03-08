#include<bits/stdc++.h>

using namespace std;

long long merge(long long a[], int l, int mid, int r)
{
	int siz1=mid-l+1, siz2=r-mid;
	long long *a1=new long long[siz1],
		*a2=new long long[siz2];
	for(int i=0; i<siz1; i++) a1[i]=a[l+i];
	for(int i=0; i<siz2; i++) a2[i]=a[mid+1+i];
	int id=l, id1=0, id2=0;
    long long cnt=0;
	while(id1<siz1 && id2<siz2) {
		if(a1[id1]<=a2[id2]) {
			a[id]=a1[id1];
			id1++;
			id++;
		}
		else {
			a[id]=a2[id2];
			id2++;
			id++;
            cnt+=(siz1-id1);
		}
	}
	while(id1<siz1) {
		a[id]=a1[id1];
		id++;
		id1++;
	}
	while(id2<siz2) {
		a[id]=a2[id2];
		id++;
		id2++;
	}
	delete[] a1;
	delete[] a2;
    return cnt;
}

long long mergeSort(long long a[], int l, int r) {
	if(l>=r) return 0;
    long long cnt=0;
	int mid=l+(r-l)/2;
	cnt+=mergeSort(a, l, mid);
	cnt+=mergeSort(a, mid+1, r);
	cnt+=merge(a, l, mid, r);
    return cnt;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long a[100000];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		long long res=mergeSort(a, 0, n-1);
        cout << res << endl;

	}
}