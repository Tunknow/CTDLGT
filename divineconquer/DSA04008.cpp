#include<bits/stdc++.h>

int mod=1e9+7;

using namespace std;

struct matrix
{
        long long f[2][2];

        friend matrix operator*(matrix A, matrix B) {
            matrix C;
            for(int i=0; i<2; i++) {
                for(int j=0; j<2; j++) {
                    C.f[i][j]=0;
                    for(int k=0; k<2; k++) {
                        C.f[i][j]=(C.f[i][j]+(A.f[i][k]%mod)*(B.f[k][j]%mod))%mod;
                    }
                }
            }
            return C;
        }
};

matrix fpow(matrix A, int n)
{
    if(n==1) return A;
    if(n%2==0) return fpow(A,n/2)*fpow(A,n/2);
    else return A*fpow(A,n/2)*fpow(A,n/2);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        matrix A;
        A.f[0][0]=1;
        A.f[1][0]=1;
        A.f[0][1]=1;
        A.f[1][1]=0;
        matrix res=fpow(A,n);
        cout << res.f[1][0] << endl;
    }
}