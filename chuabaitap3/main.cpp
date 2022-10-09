#include<bits/stdc++.h>
using namespace std;
template<class t> class matrix
{
    t **a;
    int n,m;
public:
    t operator!();
    friend istream& operator>>(istream& x, matrix &y);
    friend ostream& operator<<(ostream& x, matrix y);
};
ostream& operator<<(ostream& x, matrix y)
{
    for(int i=0; i<y.n; i++)
    {
        for(int j=0; j<y.m; j++)
            x<<setw(5)<<y.a[i][j];
        x<<endl;
    }
    return x;
}

istream& operator>>(istream& x, matrix& y)
{
    x>>y.n; x>>y.m;
    y.a = new t*[y.n];
    for(int i = 0; i<y.n; i++)
        y.a[i] = new t[y.m];
    for(int i=0; i<y.n; i++)
    for(int j=0; j<y.m; j++)
    {
        cout<<i<<","<<j<<": ";
        x>>y.a[i][j];
    }
    return x;
}
t matrix::operator!()
{
    int M = a[0][0];
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
        if(a[i][j]>M) M=a[i][j];
    return M;
}
