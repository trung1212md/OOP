#include <bits/stdc++.h>

using namespace std;
class MATRIX
{
    double **a;
    int n,m;
public:
    friend iostream &operator>>(iostream &x,MATRIX &y);
    friend ostream &operator<<(ostream &x,MATRIX &y);
    MATRIX operator-();
    MATRIX operator+(MATRIX y);
    MATRIX operator-(MATRIX y);


};
iostream &operator>>(iostream &x,MATRIX &y)
{
    cout <<"nhap n=";x>>y.n;
    cout <<"nhap m=";x>>y.m;
    y.a=new double*[y.n];
    for(int i=0;i<y.n;i++)
        y.a[i]=new double[y.m];
    for(int i=0;i<y.n;i++)
        for(int j=0;i<y.m;j++)
    {
        x>>y.a[i][j];

    }
    return x;
}
ostream &operator<<(ostream &x,MATRIX &y)
{
     for(int i=0;i<y.n;i++)
     {

        for(int j=0;i<y.m;j++)
        x<<y.a[i][j]<<" ";
        x<<endl;
     }



    return x;

}
MATRIX MATRIX::operator+(MATRIX y)
{
    MATRIX tong;
    if(m==y.m&&n==y.n)
    {
        tong.n=n;
        tong.m=m;
        tong.a=new double*[n];
        for(int i=0;i<n;i++)
            tong.a[i]=new double[m];
        for(int i=0;i<y.n;i++)
        for(int j=0;i<y.m;j++)
      tong.a[i][j]=a[i][j]+y.a[i][j];

    }
    else
    {

        tong.n=tong.m=0;
        tong.a=NULL;
    }
    return tong;
}
MATRIX MATRIX::operator-(MATRIX y)
{
    MATRIX hieu;
    if(m==y.m&&n==y.n)
    {
        hieu.n=n;
        hieu.m=m;
        hieu.a=new double*[n];
        for(int i=0;i<n;i++)
            hieu.a[i]=new double[m];
        for(int i=0;i<y.n;i++)
        for(int j=0;i<y.m;j++)
      hieu.a[i][j]=a[i][j]-y.a[i][j];

    }
    else
    {

        hieu.n=hieu.m=0;
        hieu.a=NULL;
    }
    return hieu;
}
MATRIX MATRIX::operator-()
{
     for(int i=0;i<y.n;i++)
        for(int j=0;i<y.m;j++)
            a[i][j]=-a[i][j];
            return *this;

}
int main()
{
    MATRIX P,Q;
    cout <<"nhap ma tran P"<<endl;
    cin>>P;
    cout <<"nhap ma tran Q"<<endl;
    cin>>Q;
    P=-P;
    Q=-Q;
    cout <<" ma tran P"<<P<<endl;
     cout <<" ma tran P"<<Q<<endl;
     MATRIX T=P+Q,H=P-Q;
     cout <<"tong ma tran P"<<T<<endl;
     cout <<" hieu ma tran P"<<H<<endl;
     ofstream f("D:/matrix.txt",ios::app)
     f <<" ma tran P"<<P<<endl;
     f <<" ma tran P"<<Q<<endl;
     f <<"tong ma tran P"<<T<<endl;
     f <<" hieu ma tran P"<<H<<endl;
     f.close();
}
