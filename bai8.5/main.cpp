#include <bits/stdc++.h>
using namespace std;
class SKINL
{
    int *a;
    int n;
public:
    SKINL operator++();
    SKINL operator--();
    friend iostream &operator>>(iostream &x,SKINL &y);
    friend ostream &operator <<(ostream &x,SKINL y);

};
SKINL SKINL::operator++()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(a[i]>a[j])

        swap(a[i],a[j]);

        return *this;
}
SKINL SKINL::operator--()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(a[i]<a[j])
        swap(a[i],a[j]);

        return *this;
}
iostream &operator>>(iostream &x,SKINL &y)
{
    cout <<"nhap n";cin>>y.n;
    y.a=new int[y.n];
    for(int i=0;i<y.n;i++)
    {
        x>>y.a[i];

    }
    return x;
}
ostream &operator <<(ostream &x,SKINL y)
{
    for(int i=0;i<y.n;i++)
    {
        x<<y.a[i];
    }
    return x;
}
int main()
{
    SKINL p;
    cout <<"nhap mang"<<endl;
    cin>>p;

    p=++p;
    cout <<"mang sao khi sap xep tang dan";
    cout <<p;
    p=--p;
     cout <<"mang sao khi sap xep giam dan";
     cout <<p;
     ofstream f("D:/mang.txt",ios::app);

    f <<"mang sao khi sap xep tang dan";
    f <<p;
     f <<"mang sao khi sap xep giam dan";
     f <<p;
     f.close();
}
