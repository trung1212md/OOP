#include <iostream>

using namespace std;
class Mang
{
private:
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    Mang operator +(Mang x);
    Mang operator -();
    int operator ++();
};
void Mang::nhap()
{
     cout <<"nhap n=";cin>>n;
     a=new int[n];
     for(int i=0;i<n;i++)
     {
         cout <<"phan tu thu "<<i+1<<endl;
         cin >>a[i];
     }
}
void Mang::xuat()
{
   for(int i=0;i<n;i++)
       cout <<"a["<<i<<"]="<<a[i];

}
Mang Mang::operator+(Mang x)
{
    Mang C;
    if(n!=x.n)
    {
        C.n=0;
        c.a=NULL;

    }
    else
    {
        C.n=n;
        C.a=new int[n];
        for(int i=0;i<n;i++)
            C.a[i]=x.a[i]+a[i];
    }
    return C;

}
Mang Mang::operator-()
{
    for(int i=0;i<n;i++)
        a[i]=-a[i];
    return *this

}
int Mang::operator++()
{
    int M=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>M)
        M=a[i];
     return M;
}
int main()
{
   Mang P,Q;
   P.nhap();P.xuat();
   Q.nhap();Q.xuat();

   Mang k;
   k=P+Q;
   k.xuat();
   k=-k
   k.xuat();
   cout <<"max"<<++k;
}
