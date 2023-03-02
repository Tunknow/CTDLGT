#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int mid, int r)
{
	int siz1=mid-l+1, siz2=r-mid;
	int *a1=new int[siz1],
		*a2=new int[siz2];
	for(int i=0; i<siz1; i++) a1[i]=a[l+i];
	for(int i=0; i<siz2; i++) a2[i]=a[mid+1+i];
	int id=l, id1=0, id2=0;
	while(id1<siz1 && id2<siz2) {
		if(a1[id1]<a2[id2]) {
			a[id]=a1[id1];
			id1++;
			id++;
		}
		else {
			a[id]=a2[id2];
			id2++;
			id++;
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
}

void mergeSort(int a[], int l, int r) {
	if(l>=r) return;
	int mid=l+(r-l)/2;
	mergeSort(a, l, mid);
	mergeSort(a, mid+1, r);
	merge(a, l, mid, r);
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[100000];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		mergeSort(a, 0, n-1);
		for(int i=0; i<n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
