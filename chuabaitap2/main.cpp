#include <iostream>

using namespace std;
class Mang
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    int max;

};
void Mang::nhap()
{
    cout <<"nhap n";cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

}
void Mang::xuat()
{
    for(int i=0;i<n;i++)
       cin>>a[i];

}
void Mang::max()
{
    int m=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>m);
    m=a[i];

}
int main()
{
   Mang a;
   a.nhap();
   a.xuat();
   cout <<"max"<<a.max();
}
