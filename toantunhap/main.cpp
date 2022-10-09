#include <bits/stdc++.h>

using namespace std;
class Mang
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    Mang operator+(Mang q);
    int operator++();

};
int Mang::operator++()
{
    float M=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>M)
        M=a[i];
    return M;

}
Mang Mang::operator+(Mang q)
{
    Mang k;
    if(n==q.n)
    {
        k.n=n;
        k.a=new int[n];
        for(int i=0;i<n;i++)
            k.a[i]=a[i]+q.a[i];

    }
    else
    {
        k.n=0;
        k.a=NULL;

    }
    return k;

}
void Mang::nhap()
{
    cout <<"nhap n";cin >>n;
    a=new int[n];
    for(int i=0;i<n;i++)
    {

        cout<<"a["<<i<<"]=";
        cin >>a[i];
    }
}
void Mang::xuat()
{
    for(int i=0;i<n;i++)
    {
        cout <<a[i]<<endl;
    }
}
int main()
{
    Mang P,Q;
    P.nhap();
    P.xuat();
    Q.nhap();
    Q.xuat();
    Mang k=P+Q;
    k.xuat();
    cout <<"max="<<++k;
}
