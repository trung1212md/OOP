#include<bits/stdc++.h>
using namespace std;
class Mang
{
    private:
    int *a;
    int  n;
    public:
        void nhap();
        void sap();
        void xuat();
};
void Mang::nhap()
{
    cout<<"nhap n";cin>>n;
    a=new int [n];
    for(int i=0;i<n;i++)
    {
        cout <<"["<<i<<"]=";
        cin>>a[i];

    }

}
void Mang::sap()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
}
void Mang::xuat()
{
    cout <<"mang vua nhap"<<endl;
    for(int i=0;i<n;i++)
    cout<< a[i]<<" ";

}
int main()
{
    Mang b;
    b.nhap();
    b.sap();

    b.xuat();
}
