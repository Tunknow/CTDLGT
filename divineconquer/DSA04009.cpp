#include<bits/stdc++.h>

int mod=1e9+7;

using namespace std;

struct matrix
{
        int siz;
        vector<vector<long long>> f;
        matrix(int n) : siz(n), f(n, vector<long long> (n)) {}
        friend matrix operator*(matrix A, matrix B) {
            matrix C(A.siz);
            for(int i=0; i<A.siz; i++) {
                for(int j=0; j<A.siz; j++) {
                    C.f[i][j]=0;
                    for(int k=0; k<A.siz; k++) {
                        C.f[i][j]=(C.f[i][j]+(A.f[i][k]%mod)*(B.f[k][j]%mod))%mod;
                    }
                }
            }
            return C;
        }
};

matrix fpow (matrix a, long long n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return fpow(a,n-1)*a;
    matrix tmp = fpow(a,n/2);
    return tmp*tmp;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        matrix A(n);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) cin >> A.f[i][j];
        matrix res=fpow(A,k);
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << res.f[i][j] << " ";
            }
            cout << endl;
        }
    }
}